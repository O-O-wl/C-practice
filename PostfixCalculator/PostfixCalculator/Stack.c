//
//  Stack.c
//  PostfixCalculator
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//
#include "stdlib.h"
#include "stdio.h"
#include "Stack.h"
Stack* createStack(int capacity) {
    Stack* newStack = (Stack*)malloc(sizeof(Stack));
    
    newStack->capacity = capacity;
    newStack->top = 0;
    newStack->data = (char*)malloc(sizeof(char) * capacity);
    
    return newStack;
}

void push(Stack* stack, char data) {
    printf("%c 가 푸쉬\n",data);
    stack->data[stack->top++] = data;
}

char pop(Stack* stack) {
    char popped = stack->data[--stack->top];
    printf("%c 가 팝\n",popped);
    return popped;
}
