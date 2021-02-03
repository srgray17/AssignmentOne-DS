#include <stdio.h>
#include "header.h"

void display(struct stackNode* top)
{
    printf("\n");
    while (top != NULL)
    {
        printf(" %d ", top->data);
        top = top->next;
    }
}