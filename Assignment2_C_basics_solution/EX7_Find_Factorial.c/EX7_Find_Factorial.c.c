
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number, factorial = 1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &number);

	if(number < 0)
		printf("ERROR!!! Factorial of negative number doesn't exist");
	else
	{
		if(number == 0)
		{
			printf("Factorial = 1");
		}
		else
		{
			while(number != 1)
			{
				factorial *= number;
				number--;
			}
			printf("Factorial = %d", factorial);
		}
	}


}
