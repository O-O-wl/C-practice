//
//  Stack.c
//  Stack
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>
// MARK: - Node 생성
Node* createNode(int data) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = data;
    return newNode;
}

// MARK: - Stack 생성 및 소멸
Stack* createStack(int capacity) {
    Stack *newStack = (Stack*)malloc(sizeof(Stack));
    
    newStack->top = 0;
    newStack->capacity = capacity;
    newStack->nodes = (Node*)malloc(sizeof(Node) * capacity);
    
    return newStack;
}
void destroyStack(Stack* stack) {
    free(stack->nodes);
    free(stack);
}


void push(Stack* stack, int data) {
    int index = stack->top;
    stack->nodes[index].data = data;
    stack->top++;
}

int pop(Stack* stack) {
    int index = --(stack->top);
    return stack->nodes[index].data;
}

int isEmpty(Stack* stack) {
    return stack->top == 0;
}
int count(Stack* stack) {
    return stack->top;
}
