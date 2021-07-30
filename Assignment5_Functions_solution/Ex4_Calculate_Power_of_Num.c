#include <stdio.h>
#include <stdlib.h>

int calc_power(int base, int power);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int base, power;
	printf("Enter base number: ");
	scanf("%d", &base);

	printf("Enter power number(positive number): ");
	scanf("%d", &power);

	int result = calc_power(base, power);
	printf("%d^%d = %d", base, power, result);
}

int calc_power(int base, int power)
{
	if(power == 0)
		return 1;
	return base * calc_power(base, power-1);
}
