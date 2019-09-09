//
//  DoubleLinkedList.h
//  DoubleLinkedList
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#ifndef DoubleLinkedList_h
#define DoubleLinkedList_h

typedef struct tagNode {
    int data;
    struct tagNode * prevNode;
    struct tagNode * nextNode;
}
Node ;

Node* createNode(int data);
void appendNode(Node** head, Node* new);
void removeNode(Node** head, Node* remove);
void destroyNode(Node* node);
void print(Node* list);

#endif /* DoubleLinkedList_h */
