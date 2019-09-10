//
//  main.c
//  PostfixToInfix
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include <stdio.h>
#include "Converter.h"
#include "Stack.h"

int main(int argc, const char * argv[]) {
    
    char* infix = "1+(3*2)+3"; // 132*+3+
    char* postfix = convertToPostfix(infix);
    printf("%s\n",postfix);
    return 0;
}
