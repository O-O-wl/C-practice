//
//  BinaryTree.h
//  Binary-Tree
//
//  Created by 이동영 on 16/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#ifndef BinaryTree_h
#define BinaryTree_h

typedef char Element;

typedef struct tagNode {
    struct tagNode* left;
    struct tagNode* right;
    Element data;
} Node;

Node* createNode(Element data);
void destroyNode(Node* node);

void printPreOrder(Node* root);
void printInOrder(Node* root);
void printPostOrder(Node* root);

#endif /* BinaryTree_h */
