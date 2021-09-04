#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char alphapet = 'A';
	char *ptr = &alphapet;

	printf("The Alphabets are : \n");
	for(int i = 0; i < 26; i++)
	{
		printf("%c  ", *ptr);
		(*ptr)++;
	}
}
