#include <stdio.h>
#include "header.h"

bool pushStack(struct stackNode** stackNode,
    void* data) {

    // allocate node 
    struct stackNode* new_node =
        (struct stackNode*)malloc(sizeof(struct stackNode));

    if (new_node == NULL)
    {
        printf("Stack overflow \n");
        exit(0);
    }

    // put in the data  
    new_node->data = data;

    // link the old list  
    // off the new node  
    new_node->next = (*stackNode);

    // move the head to  
    // point to the new node  
    (*stackNode) = new_node;
}