#include<stdio.h>
#include<math.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int x1, x2, y1, y2, x3, y3;
	float l1, l2, l3,P,S,p2;
		printf("¬ведите координаты x1 y1:");
		scanf_s("%d %d", &x1, &y1);
		printf("¬ведите координаты x2 y2 :");
		scanf_s("%d %d", &x2, &y2);
		printf("¬ведите координаты x3 y3:");
		scanf_s("%d %d", &x3, &y3);
		l1 = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
		l2 = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
		l3 = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
		P = l1 + l2 + l3;
		p2 = P / 2;
		S = sqrt(p2 * (p2 - l1) * (p2 - l2) * (p2 - l3));
		printf("ѕериметр %f\n",P);
		printf("ѕлощадь %f\n", S);
		
	return 0;
}