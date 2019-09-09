//
//  List.c
//  LIST
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

//typedef struct tagNode {
//    int data;
//    struct tagNode * nextNode;
//} Node;

Node* createNode(int data) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->data = data;
    node->nextNode = NULL;
    return node;
}

void appendNode(Node** head, Node* new) {
    if ( *head == NULL) {
        *head = new;
    }
    else {
        Node* tail = *head;
        
        while (tail->nextNode != NULL) {
            tail = tail->nextNode;
        }
        tail->nextNode = new;
    }
}

void removeNode(Node** head, Node* remove) {
    Node* target = *head;
    if (target == remove) {
        *head = (*head)->nextNode;
    }
    else {
        while (target->nextNode != remove) {
            target = (target)->nextNode;
        }
        target->nextNode = remove->nextNode;
    }
}

void delete(Node* head, int index) {
    Node* target = head;
    while (index-- > 1) {
        target = target->nextNode;
    }
    target->nextNode = NULL;
}

Node* get(Node* tail, int index) {
    if (index == 0) {
        return tail;
    }
    return get(tail->nextNode, index-1);
}

void print(Node* head) {
    Node* target = head;
    while (target != NULL) {
        printf("%d - ", target->data);
        target = target->nextNode;
    }
}

int count(Node** list) {
    int count = 0;
    Node* current = *list;
    while (current != NULL) {
        current = current->nextNode;
        count++;
    }
    return count;
}
