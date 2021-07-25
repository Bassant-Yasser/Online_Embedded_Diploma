
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float number1, number2;
	printf("Enter 2 numbers: ");
	fflush(stdout);
	scanf("%f %f", &number1, &number2);
	printf("Sum: %f", number1 * number2);
}
