#include <stdio.h>
#include <stdlib.h>

struct complex{
	float real;
	float imaj;
};

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct complex number1, number2;
	printf("For 1st complex number \nEnter real and imaginary respectively: ");
	scanf("%f %f", &number1.real, &number1.imaj);
	printf("For 2nd complex number \nEnter real and imaginary respectively: ");
	scanf("%f %f", &number2.real, &number2.imaj);

	printf("Sum = %.1f + %.1fi", number1.real + number2.real, number1.imaj + number2.imaj);
}
