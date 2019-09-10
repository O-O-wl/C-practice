//
//  Calculator.h
//  Arithmetic-Calculator
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#ifndef Calculator_h
#define Calculator_h

char* convertToPostfix(char* infixExpression);
double calculate(char* postfixExpression);
char* nextToken(char* expression, int *start, int *type);
int isNumber(char c);
#endif /* Calculator_h */
