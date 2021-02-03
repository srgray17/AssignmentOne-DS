#include <stdio.h>
#include "header.h"

bool isEmpty(struct stackNode* stackNode)
{
    return (stackNode == NULL) ? 1 : 0;
}