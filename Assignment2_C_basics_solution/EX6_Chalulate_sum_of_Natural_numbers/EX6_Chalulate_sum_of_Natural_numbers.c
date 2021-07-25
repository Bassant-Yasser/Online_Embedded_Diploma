
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &number);

	printf("sum = %d", number * (number + 1) / 2);
}
