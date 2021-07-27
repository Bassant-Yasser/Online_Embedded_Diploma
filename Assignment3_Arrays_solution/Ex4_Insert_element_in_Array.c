#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int array[100], n, inserted_num, location;
	printf("Enter number of elements: ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("Enter the element to be inserted: ");
	scanf("%d", &inserted_num);

	printf("Enter the location: ");
	scanf("%d", &location);

	for(int i = n; i >= location; i--)
	{
		array[i] = array[i-1];
	}
	array[location-1] = inserted_num;

	for(int i = 0; i < n+1; i++)
	{
		printf("%d ", array[i]);
	}
}
