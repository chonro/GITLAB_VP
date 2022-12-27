#include<stdio.h>
#include<math.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	
	float chaz, sum, raz, proiz;
	float a=0;
	float b=0;
	printf("введите a:");
	scanf_s("%f", &a);
	printf("введите b:");
	scanf_s("%f", &b);
	if (a != 0 && b != 0) {
		sum = a + b;
		printf("sum = %f\n", sum);
		raz = a - b;
		printf("raz = %f\n", raz);
		proiz = a * b;
		printf("proiz = %f\n", proiz);
		chaz = a / b;
		printf("chaz = %f\n", chaz);
	}
	return 0;
}