
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float number, max;
	printf("Enter 3 numbers: ");
	fflush(stdout);
	for(int i = 0; i < 3; i++)
	{
		scanf("%f", &number);
		if(i == 0)
			max = number;
		else if(number > max)
			max = number;
	}

	printf("Largest number: %0.2f", max);
}
