#include <stdio.h>
#include <stdlib.h>

void print_primes(int interval1, int interval2);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int interval1, interval2;
	printf("Enter two numbers(intervals): ");
	scanf("%d %d", &interval1, &interval2);
	print_primes(interval1, interval2);
}

void print_primes(int interval1, int interval2)
{
	printf("Prime numbers between %d and %d are: ", interval1, interval2);
	for(int i = interval1; i <= interval2; i++)
	{
		int flag = 0;
		if((i % 2 == 0) && i != 2)
			continue;
		if(i == 2)
		{
			printf("%d, ", i);
			continue;
		}

		for(int j = i - 1; j >= 3; j-=1)
		{
			if(i % j == 0)
				flag = 1;
		}
		if(!flag)
			printf("%d ", i);

	}
}
