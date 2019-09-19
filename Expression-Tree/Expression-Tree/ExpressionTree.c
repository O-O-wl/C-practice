//
//  ExpressionTree.c
//  Expression-Tree
//
//  Created by 이동영 on 16/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include "ExpressionTree.h"
#include "stdlib.h"
#include "string.h"

Node* createNode(Element data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void destroyNode(Node* node) {
    free(node);
}

Node* createTree(char* postExpression, Node** root) {
    int len = (int)strlen(postExpression);
    // (1 + 2) / ((3 - 4) * (5 - 6))
    // 1 2 + 3 4 - 5 6 - * /
    char token = postExpression[len-1];
    postExpression[len-1] = '\0';
    
    switch (token) {
        case '+':
        case '-':
        case '/':
        case '*':
            *root = createNode(token);
            createTree(postExpression, &(*root)->right);
            createTree(postExpression, &(*root)->left);
            return *root;
            break;
        default:
            *root = createNode(token);
            break;
    }
    return *root;
}

void print(Node* node, int depth) {
    char* indent = (char*)malloc(sizeof(char)*depth);
    for(int i = 0;i < depth; i++) {
        indent[i] = ' ';
    }
    printf("%s%c\n", indent, node->data);
    if(node->left != NULL) {
        print(node->left, depth+1);
    }
    if(node->right != NULL) {
        print(node->right, depth+1);
    }
}

double evaluation(Node* node) {
    double left = 0;
    double right = 0;
    // 12+43-*
    
    if (node->left != NULL) {
        left = evaluation(node->left);
    }
    else {
        return atof(&node->data);
    }
    if (node->right != NULL) {
        right = evaluation(node->right);
    }
    else {
        return atof(&node->data);
    }
    switch (node->data) {
        case '+':
            return left + right;
            break;
        case '-':
            return left - right;
            break;
        case '*':
            return left * right;
            break;
        case '/':
            return left / right;
            break;
        default:
            return 0;
            break;
    }
}
