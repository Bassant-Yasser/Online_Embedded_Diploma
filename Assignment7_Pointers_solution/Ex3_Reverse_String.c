#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char str[20];
	printf("Input a string : ");
	gets(str);

	char *ptr = str;
	int i = 0;
	while(*ptr != '\0')
	{
		ptr++;
		i++;
	}

	printf("Reverse of the string is : ");
	ptr--;
	while(i != 0)
	{
		printf("%c",*ptr);
		ptr--;
		i--;
	}

}
