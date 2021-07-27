#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int matrix[100][100], rows, coloumns;

	printf("Enter rows and columns of matrix: ");
	scanf("%d %d", &rows, &coloumns);

	printf("Enter elements of matrix: \n");
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < coloumns; j++)
		{
			printf("Enter element a%d%d: ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
		}
	}

	printf("Entered matrix: \n");
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < coloumns; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	printf("Transpose of matrix: \n");
	for(int j = 0; j < coloumns; j++)
	{
		for(int i = 0; i < rows; i++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}
