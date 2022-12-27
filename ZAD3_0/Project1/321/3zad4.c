#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

	setlocale(LC_ALL, "rus");

	int a, b, rez;
	for (a = 1; a < 10; a++) {
		for (b = 1; b < 10; b++) {

			rez = a * b;
			printf("%d \t", rez);
		}
		printf("\n");
	}

	return 0;
}