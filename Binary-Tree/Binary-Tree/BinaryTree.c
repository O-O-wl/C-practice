//
//  BinaryTree.c
//  Binary-Tree
//
//  Created by 이동영 on 16/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include "BinaryTree.h"
#include "stdlib.h"
#include "stdio.h"

Node* createNode(Element data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->data = data;
    return newNode;
}

void destroyNode(Node* node) {
    free(node);
}

void printPreOrder(Node* root) {
    // 루트 -> 왼쪽 하위 트리 -> 오른쪽 하위 트리
    if (root != NULL) {
        printf("%c ",root->data);
        printPreOrder(root->left);
        printPreOrder(root->right);
    }
}
void printInOrder(Node* root) {
    if (root !=NULL) {
        printInOrder(root->left);
        printf("%c ",root->data);
        printInOrder(root->right);
    }
}

void printPostOrder(Node* root) {
    if (root !=NULL) {
        printPostOrder(root->left);
        printPostOrder(root->right);
        printf("%c ",root->data);
    }
}
