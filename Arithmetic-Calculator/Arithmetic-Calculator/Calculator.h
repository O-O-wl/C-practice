//
//  Calculator.h
//  Arithmetic-Calculator
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#ifndef Calculator_h
#define Calculator_h
enum Type {
    EOL = -1,
    NONE = 0,
    OPERAND = 1,
    OPERATOR = 2,
    WHITE_SPACE = 3,
    OPEN_BRAKET = 4,
    CLOSE_BRAKET = 5
};

char* convertToPostfix(char* infixExpression);
double calculate(char* postfixExpression);
char* nextToken(char* expression, int *start, enum Type *type);
int isNumber(char c);
int isOperator(char c);
#endif /* Calculator_h */
