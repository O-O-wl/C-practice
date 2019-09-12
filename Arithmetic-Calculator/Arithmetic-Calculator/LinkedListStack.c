//
//  LinkedListStack.c
//  Arithmetic-Calculator
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include "LinkedListStack.h"
#include "string.h"
#include "stdlib.h"
#include "stdio.h"
Node* createNode(char* data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->nextNode = NULL;
    return newNode;
}

LinkedListStack* createStack(void) {
    LinkedListStack* stack = (LinkedListStack*)malloc(sizeof(LinkedListStack));
    stack->top = NULL;
    stack->nodes = NULL;
    stack->count = 0;
    return stack;
}

void push(LinkedListStack* stack, Node* newNode) {
    Node** head = &(stack->nodes);
    
    if(*head == NULL) {
        *head = newNode;
        stack->top = newNode;
    }
    else {
        Node* tail = *head;
        while (tail->nextNode != NULL) {
            tail = tail->nextNode;
        }
        tail->nextNode = newNode;
        stack->top = newNode;
    }
    stack->count++;
    
}

Node* pop(LinkedListStack* stack) {
    Node* tail = stack->nodes;
    if (tail == stack->top) {
        Node* popped = tail;
        stack->nodes = NULL;
        stack->count--;
        return popped;
    }
    else {
        while (tail->nextNode != stack->top) {
            tail = tail->nextNode;
        }
        
        Node* popped = stack->top;
        tail->nextNode = NULL;
        stack->top = tail;
        
        stack->count--;
        return popped;
    }
}

void show(LinkedListStack* stack) {
    Node* current = stack->nodes;
    int i = 0;
    while (current != NULL) {
        printf("%s\n",current->data);
        current = current->nextNode;
    }
}
