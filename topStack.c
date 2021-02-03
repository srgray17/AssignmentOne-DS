#include <stdio.h>
#include "header.h"
#include <climits>

int stackTop(struct stackNode* stack) {
    if (isEmpty(stack))
        return INT_MIN;
    return stack->data;
}