#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "header.h"


int main() {
	//problem 1
    struct sNode* stack = NULL;
    pushStack(&stack, 10);
    pushStack(&stack, 11);
    pushStack(&stack, 12);
    pushStack(&stack, 13);

    printf("List of integers in order");
    display(stack);
    reverse(&stack);
    printf("\n List of integers in reversed order ");
    display(stack);


    //problem 2
    decimalToHexidecimal(12);

    //problem 3
    moveCars();
 

	return 0;
}