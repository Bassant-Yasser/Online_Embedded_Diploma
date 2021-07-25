
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char operator;
	float operand1, operand2, result;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdout);
	scanf("%c", &operator);

	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f %f", &operand1, &operand2);

	if(operator == '+')
		result = operand1 + operand2;
	else if(operator == '-')
		result = operand1 - operand2;
	else if(operator == '*')
		result = operand1 * operand2;
	else if(operator == '/')
		result = operand1 / operand2;

	printf("%.1f %c %.1f = %.1f", operand1, operator, operand2, result);
}
