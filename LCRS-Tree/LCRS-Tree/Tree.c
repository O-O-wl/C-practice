//
//  Tree.c
//  LCRS-Tree
//
//  Created by 이동영 on 15/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include "Tree.h"
#include "stdlib.h"
#include "stdio.h"

Node* createNode(Element data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->leftChildren = NULL;
    newNode->rightSibling = NULL;
    return newNode;
}

void destroyNode(Node* node) {
    free(node);
}

void appendChildren(Node* parent, Node* children) {
    if (parent->leftChildren == NULL) {
        parent->leftChildren = children;
    } else {
        appendSibling(parent->leftChildren, children);
    }
}

void appendSibling(Node* tree, Node* sibling) {
    if (tree->rightSibling == NULL) {
        tree->rightSibling = sibling;
    } else {
        appendSibling(tree->rightSibling, sibling);
    }
}

void print(Node* tree, int depth) {
    char* indent = (char*)malloc(sizeof(char)*depth);
    for(int i = 0; i<depth; i++) {
        indent[i] = ' ';
    }
    printf("%s%c\n", indent, tree->data);
    
    if ((tree->leftChildren != NULL)) {
        if (tree->rightSibling != NULL) {
            print(tree->rightSibling,depth);
        }
        print(tree->leftChildren, depth+1);
    } else {
        if (tree->rightSibling != NULL) {
            print(tree->rightSibling,depth);
        }
    }
}
