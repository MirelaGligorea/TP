#include <stdio.h>

struct stack_item {
	int value;
	struct stack_item *down;
};

struct stack_item *top;
struct stack_item *new;

void push(int num) {
	new = (struct stack_item *) malloc(sizeof(struct stack_item));
	new->value = num;
	new->down = top;
	top = new;
}

void pop()
{
	struct stack_item *tmp_ptr = top;
	int tmp_val = top->value;
	top = top->down;
	free(tmp_ptr);
}

void print()
{
	int i;
	struct stack_item *tmp_ptr = top;
	printf("\nForma binara stiva output: ");
	for (i = 0; i <= 7; i++)
	{
		printf("%d ", tmp_ptr->value);
		tmp_ptr = tmp_ptr->down;
	}
	free(tmp_ptr);
	printf("\n");
}

void binar(int x)
{
	int i;

	for (i = 7; i >= 0; i--)
		printf("%d ", (x & 1 << i) >> i);
}

void inStack(int x)
{
	int i;

	x ^= 255;
	for (i = 0; i <= 7; i++)
		push((x & 1 << i) >> i);
}

int main()
{
	top = (struct stack_item *) malloc(sizeof(struct stack_item));
	int n, i, v[50];
	printf("Introduceti n: ");
	scanf("%d", &n);
	printf("Introduceti nr\n");

	for (i = 0; i < n; i++)
		scanf("%d", &v[i]);
	for (i = 0; i < n; i++)
	{
		printf("Input: %d\n", v[i]);
		printf("Forma binara: ");
		binar(v[i]);
		inStack(v[i]);
		print();
	}
	system("pause");
	return 0;
}