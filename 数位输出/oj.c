#include <stdio.h>
int main()
{
	int b;
	int a1, a2, a3, a4, a5;
	scanf_s("%d", &b);
	a5 = b % 10;
	a4 = b / 10 % 10;
	a3 = b / 100 % 10; 
	a2 = b / 1000 % 10;
	a1 = b / 10000 % 10;
	printf("%d %d %d %d %d", a1, a2, a3, a4, a5);
	return 0;
}