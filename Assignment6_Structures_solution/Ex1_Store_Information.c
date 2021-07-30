#include <stdio.h>
#include <stdlib.h>

struct Sdata{
	char name[100];
	int roll;
	float marks;
};

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct Sdata student;
	printf("Enter information of student: \n\nEnter name: ");
	scanf("%s", student.name);
	printf("Enter roll number: ");
	scanf("%d", &student.roll);
	printf("Enter marks: ");
	scanf("%f", &student.marks);

	printf("Displaying Information \n\nName: %s \nRoll: %d \nMarks: %f", student.name, student.roll, student.marks);

}
