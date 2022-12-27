#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "rus");
	float m[5] = { 2,4,-1,2,-6 };
	float sum = 0;
	float sum1 = 0;
	for (int i = 0; i < 5; i++)
	{
		
			sum1 = sum;
			sum = sum + m[i];
			if (i != 0) {
				m[i] = sum1;
			}
		

	}
	for (int i = 0; i < 5; i++) {
		printf("%f ", m[i]);
	}
	return 0;
}
