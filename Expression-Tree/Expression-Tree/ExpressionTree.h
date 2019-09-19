//
//  ExpressionTree.h
//  Expression-Tree
//
//  Created by 이동영 on 16/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#ifndef ExpressionTree_h
#define ExpressionTree_h

typedef char Element;

typedef struct tagNode {
    struct tagNode* left;
    struct tagNode* right;
    Element data;
} Node;

Node* createNode(Element data);
void destroyNode(Node* node);

Node* createTree(char* expression, Node** root);
void print(Node* node, int depth);
double evaluation(Node* node);

#endif /* ExpressionTree_h */
