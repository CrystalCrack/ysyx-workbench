#define STACK_SIZE 1024

typedef struct Stack_type {
    int data[STACK_SIZE];
    int top;
} Stack;

Stack* init_stack(){
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = -1;
    return stack;
}

int push(Stack* stack, int value){
    if(stack->top == STACK_SIZE-1){
        return -1;
    }
    stack->top++;
    stack->data[stack->top] = value;
    return 0;
}

int pop(Stack* stack, int *value){
    if(stack->top == -1){
        return -1;
    }
    *value = stack->data[stack->top];
    stack->top--;
    return 0;
}

int top(Stack* stack, int *value){
    if(stack->top == -1){
        return -1;
    }
    *value = stack->data[stack->top];
    return 0;
}

int is_empty(Stack* stack){
    return stack->top == -1;
}

int size(Stack* stack){
    return stack->top+1;
}
