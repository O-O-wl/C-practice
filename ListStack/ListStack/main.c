//
//  main.c
//  ListStack
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include <stdio.h>
#include "Stack.h"
int main(int argc, const char * argv[]) {
    Stack* stack = createStack();
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    push(stack, 5);
    print(stack);
    printf("%d\n", pop(stack));
    printf("%d\n", pop(stack));
    printf("%d\n", pop(stack));
    return 0;
}
