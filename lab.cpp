#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void var2();

int main() 
{
	var2();

	return 0;
}

void var2()
{

	int a1; //задаётся пользователем для проверки условия в будущем
	int b; //задаётся пользователем для проверки условия в будущем
	int c; //задаётся пользователем для проверки условия в будущем
	int d; //задаётся пользователем для проверки условия в будущем

	if (a1 > 0)    // если число больше 0, то оно положитеное                  
	{
            printf("Число a1 положительное!\n"); // вывод сообщения
	}
	else           // иначе число неположительное
	{
	    printf("Число a1 неположительное!\n"); // вывод сообщения
	}
	
	scanf("%d", &a);
	getchar();
	printf("Insert num2: ");
	scanf("%d", &b);
	getchar();
	printf("Insert num3: ");
	scanf("%d", &c);
	getchar();
	printf("Insert num4: ");
	scanf("%d", &d);

	int k1, k2;
	printf("Insert dop num1: ");
	scanf("%d", &k1);
	getchar();
	printf("Insert dop num1: ");
	scanf("%d", &k2);

	printf("Calculation....\n");
	int counter = 0;

	
