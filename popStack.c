#include <stdio.h>
#include "header.h"

int popStack(struct stackNode** stackNode) {

    char res;
    struct stackNode* top;

    if (*stackNode == NULL)
    {
        printf("Stack Empty \n");
        exit(0);
    }
    else
    {
        top = *stackNode;
        res = top->data;
        *stackNode = top->next;
        free(top);
        return res;
    }
}