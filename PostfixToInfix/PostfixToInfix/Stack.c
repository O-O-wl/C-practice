//
//  Stack.c
//  PostfixToInfix
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include "Stack.h"
#include "stdlib.h"
#include "stdio.h"

Stack* createStack(int capacity) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->data = (char*)malloc(sizeof(char) * capacity);
    stack->capacity = capacity;
    stack->top = 0;
    return stack;
}

void push(Stack* stack, char data) {
    stack->data[(stack->top)++] = data;
}

char pop(Stack* stack) {
    return stack->data[--(stack->top)];
}

void show(Stack* stack) {
    for(int i=0; i<stack->capacity; i++){
        if(stack->data[i] == NULL) { return; }
        printf("%c\n",stack->data[i]);
    }
}

