#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char s[100];
	int len = 0;
	printf("Enter a string: ");
	//scanf("%s", s);
	gets(s);

	int i = 0;
	while(s[i] != '\0')
	{
		len++;
		i++;
	}

	printf("Length of string: %d", len);
}
