#include <stdio.h>
int main()
{
	float c, f;
	scanf_s("%f", &f);
	c = (f - 32) * 5.0 / 9.0;
	printf("%.2f", c);
	return 0;
}