#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char s[100], s_r[100];
	int len;
	printf("Enter the string : ");
	//scanf("%s", s);
	gets(s);

	len = strlen(s);
	for(int i = 0; i < len; i++)
	{
		s_r[i] = s[len - i - 1];
	}

	printf("Reverse string : %s", s_r);
}
