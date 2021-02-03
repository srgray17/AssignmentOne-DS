#include <stdio.h>
#include "header.h"

void* reverse(struct stackNode** stackNode) {
    if (!isEmpty(*stackNode))
    {

        int temp = popStack(stackNode);
        reverse(stackNode);

        insertAtBottom(stackNode, temp);
    }

}