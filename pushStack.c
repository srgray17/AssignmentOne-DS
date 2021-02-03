#include <stdio.h>
#include "header.h"

bool pushStack(struct stackNode** stackNode,
    void* newData) {

    struct stackNode* newNode =
        (struct sNode*)malloc(sizeof(struct stackNode));

    if (newNode == NULL)
    {
        printf("Stack overflow \n");
        exit(0);
    }

    newNode->data = newData;

    newNode->next = (*stackNode);


    (*stackNode) = newNode;
}