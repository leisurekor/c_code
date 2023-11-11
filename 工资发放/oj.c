#include <stdio.h>
int main()
{
	int wages, a, b, c, d, e, f;
	scanf_s("%d", &wages);
	a = wages / 100;
	b = (wages % 100) / 50;
	c = ((wages % 100) % 50) / 20;
	d = (((wages % 100) % 50) % 20) / 10;
	e = ((((wages % 100) % 50) % 20) % 10) / 5;
	f = (((((wages % 100) % 50) % 20) % 10) % 5);
	printf("%d %d %d %d %d %d", a, b, c, d, e, f);
	return 0;
}