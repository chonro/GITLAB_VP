#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "rus");

	int a_rand;
	int b_user;
	int ugadal=0;
	a_rand = rand() % 100;
	for (int i = 0; i < 10; i++) {
		printf("введите число:");
		scanf_s("%d", &b_user);
		if (b_user == a_rand)
		{
			printf("вы угадали!");
			ugadal = 1;
			break;
		}
		else if (b_user > a_rand) {
			printf("Введенное число больше загаданного\n");
		}
		else printf("Введенное число меньше загаданного\n");
	}	
	

	if (ugadal == 0) {
		printf("вы не угадали! Загаданное число %d",a_rand);
	}

return 0;




}
