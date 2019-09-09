//
//  List.h
//  LIST
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h


typedef struct tagNode {
    int data;
    struct tagNode * nextNode;
} Node;

Node* createNode(int data);

void appendNode(Node** head, Node* new);

void removeNode(Node** head, Node* remove) ;

void delete(Node* head, int index);

Node* get(Node* tail, int index);


void print(Node* head);

int count(Node** list);

#endif /* List_h */
