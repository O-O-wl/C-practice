//
//  Tree.h
//  LCRS-Tree
//
//  Created by 이동영 on 15/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#ifndef Tree_h
#define Tree_h
#include "stdlib.h"

typedef char Element;

typedef struct tagNode {
    Element data;
    struct tagNode* leftChildren;
    struct tagNode* rightSibling;
} Node;

Node* createNode(Element data);
void destroyNode(Node* node);

void appendChildren(Node* parent, Node* children);
void appendSibling(Node* tree, Node* sibling);
void print(Node* tree, int depth);
#endif /* Tree_h */
