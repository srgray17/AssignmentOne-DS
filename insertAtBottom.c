#include <stdio.h>
#include "header.h"

void insertAtBottom(struct stackNode** stackNode,
    int item)
{
    if (isEmpty(*stackNode))
        pushStack(stackNode, item);
    else
    {

        int temp = popStack(stackNode);
        insertAtBottom(stackNode, item);

        pushStack(stackNode, temp);
    }
}