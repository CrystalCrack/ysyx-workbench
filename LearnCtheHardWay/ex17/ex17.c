#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

struct Address {
    int id;
    int set;
    char *name;
    char *email;
    //new fields
    int age;
    char *phone;
    char *city;
};

struct Database {
    int MAX_DATA;
    int MAX_ROWS;
    struct Address *rows;
};

struct Connection {
    FILE *file;
    struct Database *db;
};

void Database_close(struct Connection *conn);

void die(const char *message, struct Connection* conn)
{
    if(!conn) Database_close(conn);
    if(errno) {
        perror(message);
    } else {
        printf("ERROR: %s\n", message);
    }

    exit(1);
}

void Address_print(struct Address *addr)
{
    printf("%d %s %s %d %s %s\n",
            addr->id, addr->name, addr->email, 
            addr->age, addr->phone, addr->city);
}

void Database_load(struct Connection *conn)
{
    rewind(conn->file);
    fread(&conn->db->MAX_DATA, sizeof(int), 1, conn->file);
    fread(&conn->db->MAX_ROWS, sizeof(int), 1, conn->file);

    conn->db->rows = calloc(conn->db->MAX_ROWS, sizeof(struct Address));

    for(int i=0;i<conn->db->MAX_ROWS;i++){
        fread(&conn->db->rows[i].id, sizeof(int), 1, conn->file);
        fread(&conn->db->rows[i].set, sizeof(int), 1, conn->file);
        conn->db->rows[i].name = calloc(conn->db->MAX_DATA, sizeof(char));
        conn->db->rows[i].email = calloc(conn->db->MAX_DATA,sizeof(char));
        fread(conn->db->rows[i].name, sizeof(char), conn->db->MAX_DATA, conn->file);
        fread(conn->db->rows[i].email, sizeof(char), conn->db->MAX_DATA, conn->file);

        fread(&conn->db->rows[i].age, sizeof(int), 1, conn->file);
        conn->db->rows[i].phone = calloc(conn->db->MAX_DATA, sizeof(char));
        conn->db->rows[i].city = calloc(conn->db->MAX_DATA, sizeof(char));
        fread(conn->db->rows[i].phone, sizeof(char), conn->db->MAX_DATA, conn->file);
        fread(conn->db->rows[i].city, sizeof(char), conn->db->MAX_DATA, conn->file);
    }

}

struct Connection *Database_open(const char *filename, char mode)
{
    struct Connection *conn = malloc(sizeof(struct Connection));
    if(!conn) die("Memory error",conn);

    conn->db = malloc(sizeof(struct Database));
    if(!conn->db) die("Memory error",conn);

    if(mode == 'c') {
        conn->file = fopen(filename, "wb");
    } else {
        conn->file = fopen(filename, "rb+");

        if(conn->file) {
            Database_load(conn);
        }
    }

    if(!conn->file) die("Failed to open the file", conn);

    return conn;
}

void Database_close(struct Connection *conn)
{
    if(conn) {
        if(conn->file) fclose(conn->file);

        if(conn->db) {
            if(conn->db->rows){
                for(int i=0;i<conn->db->MAX_ROWS;i++){
                    free(conn->db->rows[i].name);
                    free(conn->db->rows[i].email);
                }
                free(conn->db->rows);
            }
            free(conn->db);
        }
        free(conn);
    }
}

void Database_write(struct Connection *conn)
{
    rewind(conn->file);

    int MAX_DATA = conn->db->MAX_DATA;
    int MAX_ROWS = conn->db->MAX_ROWS;

    //write in fixed-length data
    fwrite(&conn->db->MAX_DATA, sizeof(int), 1, conn->file);
    fwrite(&conn->db->MAX_ROWS, sizeof(int), 1, conn->file);

    //write in non-fixed-length data
    for(int i=0;i<MAX_ROWS;i++){
        fwrite(&conn->db->rows[i].id, sizeof(int), 1, conn->file);
        fwrite(&conn->db->rows[i].set, sizeof(int), 1, conn->file);
        fwrite(conn->db->rows[i].name, sizeof(char), MAX_DATA, conn->file);
        fwrite(conn->db->rows[i].email, sizeof(char), MAX_DATA, conn->file);
        fwrite(&conn->db->rows[i].age, sizeof(int), 1, conn->file);
        fwrite(conn->db->rows[i].phone, sizeof(char), MAX_DATA, conn->file);
        fwrite(conn->db->rows[i].city, sizeof(char), MAX_DATA, conn->file);
    }

}

void Database_create(struct Connection *conn, int MAX_ROWS, int MAX_DATA)
{
    int i = 0;
    conn->db->MAX_DATA = MAX_DATA;
    conn->db->MAX_ROWS = MAX_ROWS;
    conn->db->rows = malloc(MAX_ROWS*sizeof(struct Address));

    for(i = 0; i < MAX_ROWS; i++) {
        struct Address addr = {.id = i, .set = 0, .age = 0};
        addr.name = malloc(conn->db->MAX_DATA * sizeof(char));
        addr.email = malloc(conn->db->MAX_DATA * sizeof(char));
        addr.phone = malloc(conn->db->MAX_DATA * sizeof(char));
        addr.city = malloc(conn->db->MAX_DATA * sizeof(char));
        conn->db->rows[i] = addr;
    }
}

void Database_set(struct Connection *conn, int id, const char *name, const char *email, int age, const char *phone, const char *city)
{
    int MAX_DATA = conn->db->MAX_DATA;
    struct Address *addr = &conn->db->rows[id];
    if(addr->set) die("Already set, delete it first", conn);

    addr->set = 1;
    addr->age = age;
    addr->name = malloc(MAX_DATA*sizeof(char));
    addr->email = malloc(MAX_DATA*sizeof(char));

    char *res = strncpy(addr->name, name, MAX_DATA);
    if(!res) die("Name copy failed", conn);
    res = strncpy(addr->email, email, MAX_DATA);
    if(!res) die("Email copy failed", conn);
    res = strncpy(addr->phone, phone, MAX_DATA);
    if(!res) die("Phone copy failed", conn);
    res = strncpy(addr->city, city, MAX_DATA);
    if(!res) die("City copy failed", conn);

    addr->phone[MAX_DATA-1] = '\0';
    addr->city[MAX_DATA-1] = '\0';
    addr->name[MAX_DATA-1] = '\0';
    addr->email[MAX_DATA-1] = '\0';
}

void Database_get(struct Connection *conn, int id)
{
    if(id>conn->db->MAX_ROWS){
        die("There's not that many records.", conn);
    }
    struct Address *addr = &conn->db->rows[id];

    if(addr->set) {
        Address_print(addr);
    } else {
        die("ID is not set", conn);
    }
}

void Database_delete(struct Connection *conn, int id)
{
    conn->db->rows[id].set = 0;
}

void Database_list(struct Connection *conn)
{
    int i = 0;
    struct Database *db = conn->db;
    int MAX_ROWS = conn->db->MAX_ROWS;

    for(i = 0; i < MAX_ROWS; i++) {
        struct Address *cur = &db->rows[i];

        if(cur->set) {
            Address_print(cur);
        }
    }
}

enum SearchType {
    NAME, AGE, CITY, PHONE, EMAIL
};

void Database_find_by_name(struct Connection *conn, const char *name)
{
    int i = 0;
    struct Database *db = conn->db;
    int MAX_ROWS = conn->db->MAX_ROWS;

    for(i = 0; i < MAX_ROWS; i++) {
        struct Address *cur = &db->rows[i];

        if(cur->set) {
            if(strstr(cur->name, name)){
                Address_print(cur);
            }
        }
    }
}

void Database_find_by_age(struct Connection *conn, int age)
{
    for(int i = 0; i < conn->db->MAX_ROWS; i++) {
        struct Address *cur = &conn->db->rows[i];
        if(cur->set && cur->age == age) {
            Address_print(cur);
        }
    }
}

void Database_find_by_city(struct Connection *conn, const char *city)
{
    for(int i = 0; i < conn->db->MAX_ROWS; i++) {
        struct Address *cur = &conn->db->rows[i];
        if(cur->set && strstr(cur->city, city)) {
            Address_print(cur);
        }
    }
}

void Database_find_by_phone(struct Connection *conn, const char *phone)
{
    for(int i = 0; i < conn->db->MAX_ROWS; i++) {
        struct Address *cur = &conn->db->rows[i];
        if(cur->set && strstr(cur->phone, phone)) {
            Address_print(cur);
        }
    }
}

void Database_find_by_email(struct Connection *conn, const char *email)
{
    for(int i = 0; i < conn->db->MAX_ROWS; i++) {
        struct Address *cur = &conn->db->rows[i];
        if(cur->set && strstr(cur->email, email)) {
            Address_print(cur);
        }
    }
}

void Database_find(struct Connection *conn, const char* str, int type)
{
    switch(type) {
        case NAME:
            Database_find_by_name(conn, str);
            break;
        case AGE:
            Database_find_by_age(conn, atoi(str));
            break;
        case CITY:
            Database_find_by_city(conn, str);
            break;
        case PHONE:
            Database_find_by_phone(conn, str);
            break;
        case EMAIL:
            Database_find_by_email(conn, str);
            break;
        default:
            die("Invalid search type", conn);
    }
}

int main(int argc, char *argv[])
{
    if(argc < 3) die("USAGE: ex17 <dbfile> <action> [action params]", NULL);

    char *filename = argv[1];
    char action = argv[2][0];
    struct Connection *conn = Database_open(filename, action);
    int id = 0;

    switch(action) {
        case 'c':
            if(argc!=5){
                die("USAGE: ex17 <dbfile> c <MAX_ROWS> <MAX_DATA>", conn);
            }
            int MAX_ROWS = atoi(argv[3]);
            int MAX_DATA = atoi(argv[4]);
            Database_create(conn, MAX_ROWS, MAX_DATA);
            Database_write(conn);
            break;

        case 'g':
            if(argc != 4) die("Need an id to get", conn);
            id = atoi(argv[3]);
            Database_get(conn, id);
            break;

        case 's':
            if(argc != 9) die("Need id, name, email, age, phone, city to set", conn);
            id = atoi(argv[3]);
            Database_set(conn, id, argv[4], argv[5], atoi(argv[6]), argv[7], argv[8]);
            Database_write(conn);
            break;

        case 'd':
            if(argc != 4) die("Need id to delete", conn);
            id = atoi(argv[3]);
            Database_delete(conn, id);
            Database_write(conn);
            break;

        case 'l':
            Database_list(conn);
            break;

        case 'f':
            if(argc != 5) die("Need search type and search string", conn);
            char* search_type = argv[3];
            int type;
            if(strcmp(search_type, "name") == 0) {
                type = NAME;
            } else if(strcmp(search_type, "age") == 0) {
                type = AGE;
            } else if(strcmp(search_type, "city") == 0) {
                type = CITY;
            } else if(strcmp(search_type, "phone") == 0) {
                type = PHONE;
            } else if(strcmp(search_type, "email") == 0) {
                type = EMAIL;
            } else {
                die("Invalid search type", conn);
            }
            Database_find(conn, argv[4], type);
            break;
        
        case 'm':
            printf("%d %d\n", conn->db->MAX_DATA, conn->db->MAX_ROWS);
            break;
        default:
            die("Invalid action, only: c=create, g=get, s=set, d=del, l=list, f=find", conn);
    }

    Database_close(conn);

    return 0;
}
