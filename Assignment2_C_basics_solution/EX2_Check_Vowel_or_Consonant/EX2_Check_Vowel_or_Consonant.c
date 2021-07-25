
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	char c;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c", &c);

	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		printf("%c is vowel", c);
	else
		printf("%c is consonant", c);
}
