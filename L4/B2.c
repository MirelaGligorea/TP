#include <stdio.h>
#include <stdlib.h>
void suma(int* s) {
	int i, v[100], n;
	printf("Introduceti numarul de elemente:\n");
	scanf("%d", &n);
	printf("Introduceti elementele:\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &v[i]);
		*s = *s + v[i];
	}

}
int main() {
	int s = 0;
	suma(&s);
	printf("Suma elementelor este: %d\n", s);
	return 0;
}
