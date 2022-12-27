#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "rus");
	float x1, x2, y1, y2, r1, r2,R12;
	printf("Введите координаты центра первой окружности:");
	scanf_s("%f %f", &x1, &y1);
	printf("Введите координаты центра второй окружности:");
	scanf_s("%f %f", &x2, &y2);
	printf("Введите радиус первой окружности:");
	scanf_s("%f", &r1);
	printf("Введите радиус второй окружности:");
	scanf_s("%f", &r2);
	//вычисляем расстояние между центрами
	R12 = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	if (r1 + r2 < R12) {
		printf("Окружности никак не связаны.\n");
	}
	else if (r1 + r2 == R12) {
		printf("Внешнее касание окружностей\n");
	}
	else if (r2 > R12 + r1 || r1 > R12 + r2) {
		printf("окружности одна внутри другой\n");
	}
	else if (R12 + r1 == r2 || R12 + r2 == r1) {
		printf("Внутреннее касание окружностей\n");
	}
	else printf("Окружности пересекаются в двух точках\n");




return 0;
}
