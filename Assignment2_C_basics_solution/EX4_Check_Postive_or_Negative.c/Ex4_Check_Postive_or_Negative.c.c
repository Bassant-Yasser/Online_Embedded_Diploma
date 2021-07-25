
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &number);

	if(number == 0)
		printf("You entered zero");
	else if(number > 0)
		printf("%d is positive", number);
	else
		printf("%d is negative", number);
}
