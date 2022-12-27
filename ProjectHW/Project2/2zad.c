#include<stdio.h>
#include<math.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	const float PI = 3.14159;
	float g;
	float rad;
	float sinys, cosinys, tagens, cotangens;
	printf("Введите значение угла в грдадусах:");
	scanf_s("%f", &g);
	rad = PI / 180 * g;

	sinys = sin(rad);
	printf("sin %f\n", sinys);
	cosinys=cos(rad);
	printf("cos %f\n", cosinys);
	tagens= tan(rad);
	printf("tan %f\n", tagens);
	cotangens = cosinys/sinys  ;
	printf("ctg %f\n", cotangens);
	return 0;
}