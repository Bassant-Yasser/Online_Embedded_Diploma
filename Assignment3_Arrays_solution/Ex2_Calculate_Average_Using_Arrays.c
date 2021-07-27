#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float array[100], sum = 0;
	int n;
	printf("Enter the number of data: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		printf("%d. Enter number: ", i+1);
		scanf("%f", &array[i]);
		sum += array[i];
	}

	printf("Average = %.2f", sum / n);
}
