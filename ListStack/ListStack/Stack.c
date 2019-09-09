//
//  Stack.c
//  ListStack
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include "Stack.h"
#include "stdlib.h"
Node* createNode(int data) {
    Node* newNode =  (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->nextNode = NULL;
    return newNode;
}

Stack* createStack(void) {
    Stack* newStack =  (Stack*)malloc(sizeof(Stack));
    newStack->top = NULL;
    newStack->head = NULL;
    return newStack;
}

void push(Stack* stack, int data) {
    Node* newNode = createNode(data);
    if (stack->head == NULL) {
        stack->head = newNode;
        stack->top = newNode;
    }
    else {
        stack->top->nextNode = newNode;
        stack->top = newNode;
    }
}

int pop(Stack* stack) {
    int poped = stack->top->data;
    Node * tail = stack->head;
    while (tail->nextNode != stack->top) {
        tail = tail->nextNode;
    }
    stack->top = tail;
    return poped;
}

void print(Stack * stack) {
    Node* current = stack->head;
    while (current != NULL) {
        printf("데이터 : %d, 현재노드: %p 다음노드: %p \n" ,
               current->data,
               current,
               current->nextNode);
        
        current = current->nextNode;
    }
    
    
}
