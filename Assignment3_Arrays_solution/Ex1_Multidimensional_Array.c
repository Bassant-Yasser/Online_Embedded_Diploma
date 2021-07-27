#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float a[2][2], b[2][2], sum[2][2];
	printf("Enter the elements of the first matrix : \n");
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			printf("Enter a%d%d: ", i+1, j+1);
			scanf("%f", &a[i][j]);
		}
	}

	printf("Enter the elements of the second matrix : \n");
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			printf("Enter b%d%d: ", i+1, j+1);
			scanf("%f", &b[i][j]);
			sum[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("Sum of matrix: \n");
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			printf("%.1f ", sum[i][j]);
		}
		printf("\n");
	}
}
