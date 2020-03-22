#include _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int *inceput, *i, *sfarsit;
	int n, suma;
	printf("Cate numere doriti?\n");
	scanf("%d", &n);
	inceput = (int*)malloc(n * sizeof(int));
	sfarsit = inceput + n;
	printf("Introduceti numerele:\n");
	for (i = inceput; i < sfarsit; i++)
		scanf("%d", i);
	suma = 0;
	for (i = inceput; i < sfarsit, i++)
		suma = suma + *i;
	printf("Suma este:%d\n", suma);
	system("pause");
	return 0;
}
