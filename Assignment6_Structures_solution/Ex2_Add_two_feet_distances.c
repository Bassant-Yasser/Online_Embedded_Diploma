#include <stdio.h>
#include <stdlib.h>

struct Sdistance{
	int feet;
	float inches;
};

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct Sdistance distance1, distance2, result;
	printf("Enter information for 1st distance \nEnter feet: ");
	scanf("%d", &distance1.feet);
	printf("Enter inch: ");
	scanf("%f", &distance1.inches);

	printf("\nEnter information for 2nd distance \nEnter feet: ");
	scanf("%d", &distance2.feet);
	printf("Enter inch: ");
	scanf("%f", &distance2.inches);

	result.feet = distance1.feet + distance2.feet;
	result.inches = distance1.inches + distance2.inches;
	while(result.inches >= 12)
	{
		result.inches -= 12;
		result.feet++;
	}

	printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inches);

}
