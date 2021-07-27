#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int array[100], n, number;
	printf("Enter no of elements: ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("Enter the element to be searched: ");
	scanf("%d", &number);

	for(int i = 0; i < n+1; i++)
	{
		if(number == array[i])
		{
			printf("Number found at the location = %d", i+1);
			return 0;
		}
	}
	printf("Number is not found.");
}
