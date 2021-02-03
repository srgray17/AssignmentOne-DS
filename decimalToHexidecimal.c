#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "header.h"

void decimalToHexidecimal(int value) {

	long int quotient;
	int i = 1, j, temp;
	char hexadecimalNumber[100];
	
	quotient = value;
	while (quotient != 0) {
		temp = quotient % 16;
		if (temp < 10)
			temp = temp + 48; else
			temp = temp + 55;
		hexadecimalNumber[i++] = temp;
		quotient = quotient / 16;
	}
	printf("\n%d in hexidecimal is: ", value);
	for (j = i - 1;j > 0;j--)
		printf("%c", hexadecimalNumber[j]);
}