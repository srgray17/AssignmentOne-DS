#include <stdio.h>
#include <climits>
#include "header.h"


int popStack(struct stackNode** root)
{
    if (isEmpty(*root))
        return INT_MIN;
    struct stackNode* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}