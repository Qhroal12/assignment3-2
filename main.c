#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#include "my_math.h"

int main() {

	int number1, number2;
	printf("두 개의 수를 입력하세요: ");
	scanf("%d %d", &number1, &number2);

	printf("GCD: %d, LDM: %d", findGCD(number1, number2), findLCM(number1, number2));

	return 0;
}