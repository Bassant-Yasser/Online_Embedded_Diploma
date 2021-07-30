#include <stdio.h>
#include <stdlib.h>

#define area(r) (3.14*r*r)

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int radius;
	printf("Enter the radius: ");
	scanf("%d", &radius);

	printf("Area = %.2f", area(radius));
}
