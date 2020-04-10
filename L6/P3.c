#include<stdio.h>
#include<stdlib.h>


int a, b, x, poz, stiva[100];
FILE *f;

b = 1;
void Init(int k)
{
	stiva[k] = 1;
}
int Succesor()
{
	if (stiva[poz] < a / 2)
	{
		stiva[poz] = stiva[poz] + 1;
		return 1;
	}
	else
		return 0;
}
int Valid()
{
	b = 1;
	for (int i = 1; i <= poz; i++)
	{
		if (i < poz && stiva[i] > stiva[i + 1])
			return 0;
		if (b > a) return 0;
		b = b * stiva[i];
	}
	return 1;
}
void Tipar()
{
	f = fopen("input.txt", "a+t");
	fprintf(f, "\n");
	for (int i = 1; i <= poz; i++)
	{
		fprintf(f, "%d ", stiva[i]);
	}
}
void Backtracking()
{
	poz = 1;
	Init(poz);
	while (poz > 0)
	{
		x = 1;
		int n = 0;
		while (x && !n)
		{
			x = Succesor();
			if (x)
				n = Valid();
		}
		if (x)
		{
			if (b == n)
			{
				Tipar();
			}
			else
			{
				poz++;
				Init(poz);
			}
		}
		else poz--;
	}
}
int main()
{
	f = fopen("input.txt", "a+t");
	fscanf(f, "%d", &a);
	Backtracking();
	system("pause");
	return 0;
}
