#include <stdio.h>
#include <stdlib.h>
void reverse_string(char * string);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char string[100];
	printf("Enter a sentence: ");
	gets(string);
	//printf("%c %c", *string, *(string+1));
	reverse_string(string);
}

void reverse_string(char * string)
{
	if(*string == '\0')
		return;
	reverse_string(string+1);
	printf("%c", *string);
}
