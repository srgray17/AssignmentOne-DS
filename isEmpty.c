#include <stdio.h>
#include <stdbool.h>
#include "header.h"

bool isEmpty(struct stackNode* stackNode)
{
    return (stackNode == NULL) ? 1 : 0;
}