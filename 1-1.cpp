#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void swap_values(int **pptr1,int **pptr2);

int main()
{
	int num1 = 10;
	int num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;

	printf("��ȯ ����: num1=%d, num2=%d\n", num1, num2);
	swap_values(&ptr1, &ptr2);
	printf("��ȯ ����: num1=%d, num2=%d\n", num1, num2);
	return 0;
}
	
void swap_values(int** pptr1, int** pptr2) {
	int pa;

	pa = **pptr1;
	**pptr1 = **pptr2;
	**pptr2 = pa;
}