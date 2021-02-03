#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "header.h"



void moveCars() {
	struct sNode* s1 = NULL;
	struct sNode* s2 = NULL;

	

	while (true) {
		char arrivalDeparture;
		char licence[7];
		int moves = 0;
		printf("\nEnter a or d with licence plate (ex. a qwe3r4): ");
		scanf("%c %s", &arrivalDeparture, licence);
		if (arrivalDeparture == 'a' || arrivalDeparture == 'd') {
			if (arrivalDeparture == 'a') {
				if (sizeof(s1) == 10) {
					printf("Car lot is full");
				}
				else if (isEmpty(s1)) {
					printf("The car has been parked");
					pushStack(&s1, licence);
				}
				else if (sizeof(s1) < 10) {
					printf("The car has been parked");
					pushStack(&s1, licence);
				}
			}
			if (arrivalDeparture == 'd') {
				if (isEmpty(s1)) {
					printf("Car lot is empty");
				}
				else if (stackTop(s1) != licence) {//make a loop to move car from one stack to the other
					while (stackTop(s1) != licence) {
						pushStack(&s2, popStack(s1));
						moves++;
					}
					popStack(s1);
					printf("The car has left the parking lot. Cars moved %d to allow the car out.", moves);
					while (!isEmpty(s2)) {
						pushStack(&s1, popStack(s2));
					}
				}
				else if (stackTop(s1) == licence)
				{
					popStack(s1);
					printf("The car has left the parking lot. Cars moved %d to allow the car out.", moves);
				}
				else {
					printf("The car is not parked in the lot");
				}
			}
		}
		else
			printf("Invalid input");
	}
}

