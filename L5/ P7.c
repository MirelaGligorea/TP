#include <stdio.h>
#include <stdlib.h>

int st[100], vf = -1;
void push(int n)
{
	st[++vf] =n ;
}

void pop()
{
	if (vf != -1)
		vf--;
	else
		printf("Stiva este acum goala");
}


void afisare()
{
	int i;
	for (i = vf; i >= 0; i--)
		printf("%d", st[i]);
}
int verificare()
{
	int i;
	for (i = 0; i <= vf / 2; i++)
		if (st[i] != st[vf - i])
			return 0;
	return 1;
}
int binar(int x)
{
	int nr = 0, y = 1;
	while()
	{
		nr += (x % 2)*y;
		y *= 10;
		x /= 2;
	}
	return nr;
}
int main()
{
	int x, nr;
	printf("x="); scanf("%d", &x);
	nr = binar(x);
	while()
	{
		push(x % 10);
		x /= 10;
	}

	afisare();
	if (verificare())
		printf("nr este palindrom\n");
	else
		printf("nr nu este palindrom\n");
	system("pause");
	return 0;
}
