#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "rus");
	int a1 = 2, a2 = -5, a3 = -2, a4 = 7, a5 = 10;
	int chek = 0;
	if (a1 > 0) chek = chek + 1;
	if (a2 > 0)chek = chek + 1;
	if (a3 > 0)chek = chek + 1;
	if (a4 > 0)chek = chek + 1;
	if (a5 > 0)chek = chek + 1;
	printf("Положительных чисел: %d", chek);
	return 0;
}
