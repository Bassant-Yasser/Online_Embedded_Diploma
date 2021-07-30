#include <stdio.h>
#include <stdlib.h>

int factorial(int number);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int number;
	printf("Enter a positive number: ");
	scanf("%d", &number);
	int result = factorial(number);
	printf("Factorial of %d  = %d", number, result);
}

int factorial(int number)
{
	if(number == 1)
		return 1;
	int result = factorial(number - 1);
	return result * number;
}
