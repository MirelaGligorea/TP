#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a, *b, *x;
	a = (int*)malloc(sizeof(int));

	printf("a= ", a);
	scanf("%d", &a);

	b = (int*)malloc(sizeof(int));

	printf("b= ", b);
	scanf("%d", &b);

	x = a; a = b; b = x;
	printf("a= b", "b= x", "x= a");
	system("pause");
	return 0;
}