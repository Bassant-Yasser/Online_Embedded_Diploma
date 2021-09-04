#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr[15], number, *ptr;
	printf("Input the number of elements to store in the array (max 15) : ");
	scanf("%d", &number);

	printf("Input %d number of elements in the array : \n", number);
	for(int i = 0; i < number; i++)
	{
		printf("Element %d: ", i+1);
		scanf("%d", &arr[i]);
	}

	ptr = arr + number - 1;

	printf("\nThe elements of array in reverse order are : \n");
	for(int i = number - 1; i >= 0; i--)
	{
		printf("Element %d: %d \n", i+1, *ptr);
		ptr--;
	}
}
