#include <stdio.h>
#include "header.h"

int stackTop(struct stackNode* stack) {
	if (stack->top == 0)
		return NULL;
	else
		return stack->data;
}