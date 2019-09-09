//
//  main.c
//  Stack
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include <stdio.h>
#include "Stack.h"

int main(int argc, const char * argv[]) {
    
    Stack* stack  = createStack(10);
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    printf("isEmpty: %s\n", isEmpty(stack) == 1 ? "true" : "false" );
    printf("count: %d\n", count(stack));
    return 0;
}
