//
//  DoubleLinkedList.c
//  DoubleLinkedList
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include "DoubleLinkedList.h"
#include <stdlib.h>

// MARK: - 생성 소멸
Node* createNode(int data) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = data;
    newNode->prevNode= NULL;
    newNode->nextNode= NULL;
    return newNode;
}

void destroyNode(Node* node) {
    free(node);
}
// MARK: - 추가 삭제
void appendNode(Node** head, Node* new) {
    
    if ( *head  == NULL) {
        *head = new;
    }
    else {
        Node* tail = *head;
        while ((tail->nextNode) != NULL) {
            tail = tail->nextNode;
        }
        new->prevNode = tail;
        tail->nextNode = new;
    }
}

void removeNode(Node** head, Node* remove) {
    if (*head == remove) {
        if ((*head)->nextNode != NULL) {
            *head = (*head)->nextNode;
            (*head)->prevNode = NULL;
        }
        else {
            *head = NULL;
        }
    }
    else {
        Node* target = *head;
        while (target->nextNode != remove) {
            target = target->nextNode;
        }
        target->nextNode = (target)->nextNode->nextNode;
        target->nextNode->prevNode = target;
    }
}

// MARK: - print
void print(Node* list) {
    Node* tail = list;
    while (tail != NULL){
        printf("데이터: %d, 현재노드: %p, 이전 노드: %p,다음노드: %p\n",
               tail->data,
               tail,
               tail->prevNode,
               tail->nextNode);
        
        tail = tail->nextNode;
    }
}
