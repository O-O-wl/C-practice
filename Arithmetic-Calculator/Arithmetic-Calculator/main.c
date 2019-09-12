//
//  main.c
//  Arithmetic-Calculator
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include <stdio.h>
#include "LinkedListStack.h"
#include "Calculator.h"
#include "string.h"
int main(int argc, const char * argv[]) {
    
    char* expression = "1 + 3.3334 / ( 4.26 * ( 110 - 7729 ) )";
    char* postfix = convertToPostfix(expression);
    double r = calculate(postfix);
    printf("%f\n", r);
    return 0;
}
