#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int num, n;
	int a = 0;
	scanf("%d %d", &num,&n);
	int m;
	scanf("%d", &m);
	a++;
	while (m != num&&m>=0)
	{
		if (a > n && m != num)
		{
			printf("Game Over\n");
			break;
		}
		else
		{
			if (m > num)
			{
				printf("Too big\n");
				scanf("%d", &m);
				a++;
				continue;
			}
			if (m < num)
			{
				printf("Too small\n");
				scanf("%d", &m);
				a++;
				continue;
			}
		}
	}
	
		if (m == num)
	{
		if (a == 1)
			printf("Bingo!\n");
		if (a <= 3 && a != 1)
			printf("Lucky You!\n");
		if (a > 3 && a <= n)
			printf("Good Guess!\n");
	}
		if (m < 0)
		printf("Game Over\n");
		return 0;
}