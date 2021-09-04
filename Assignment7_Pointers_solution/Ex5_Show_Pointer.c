#include <stdio.h>
#include <stdlib.h>

struct Employee{
	char name[20];
	int id;
};

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct Employee employee1 = {"Alex", 20};
	struct Employee employee2 = {"Williams", 30};

	struct Employee* arr[2];
	arr[0] = &employee1;
	arr[1] = &employee2;

	struct Employee* ptr = (struct Employee*)arr[0];

	printf("Employee 1 details: \n");
	printf("Employee Name: %s \n", ptr->name);
	printf("Employee Id: %d \n \n", ptr->id);

	ptr = arr[1];

	printf("Employee 2 details: \n");
	printf("Employee Name: %s \n", ptr->name);
	printf("Employee Id: %d \n", ptr->id);
}
