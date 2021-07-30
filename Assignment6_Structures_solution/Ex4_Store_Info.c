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

	struct Sdata student[2];
	printf("Enter information of students: \n");
	for(int i = 0; i < 2; i++)
	{
		printf("For roll number  %d: \nEnter name: ", i+1);
		scanf("%s", student[i].name);
		student[i].roll = i + 1;
		printf("Enter marks: ");
		scanf("%f", &student[i].marks);
		printf("\n");
	}


	printf("Displaying Information \n\n");
	for(int i = 0; i < 2; i++)
	{
		printf("Information for roll number  %d: \n", i+1);
		printf("Name: %s \nMarks: %f \n\n", student[i].name, student[i].marks);
	}


}
