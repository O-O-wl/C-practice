//
//  main.c
//  Expression-Tree
//
//  Created by 이동영 on 16/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "ExpressionTree.h"

int main(int argc, const char * argv[]) {
    Node* root = NULL;
    char postExpression [8] = "12+43-*";
    createTree(postExpression, &root);
    print(root, 0);
    printf("%f\n", evaluation(root));
    return 0;
}
