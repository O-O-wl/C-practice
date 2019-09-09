//
//  main.c
//  PostfixCalculator
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//
#include <stdlib.h>
#include <stdio.h>
#include "Stack.h"
#include "Calculator.h"
#include "string.h"

int main(int argc, const char * argv[]) {
    char* expression = "132*-";
    double result = calculate(expression);

    printf("%f\n", result);
    return 0;
}
