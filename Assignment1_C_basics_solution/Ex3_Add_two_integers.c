

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number1, number2;
	printf("Enter 2 numbers: ");
	fflush(stdout);
	scanf("%d %d", &number1, &number2);
	printf("Sum: %d", number1 + number2);
}
