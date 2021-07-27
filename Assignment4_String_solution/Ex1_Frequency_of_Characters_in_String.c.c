#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char s[100], c;
	int sum = 0;
	printf("Enter a string: ");
	//scanf("%s", s);
	gets(s);

	printf("Enter a character to find frequency: ");
	scanf("%c", &c);

	int i = 0;
	while(s[i] != '\0')
	{
		if(c == s[i])
			sum++;
		i++;
	}

	printf("Frequency of %c = %d", c, sum);

}
