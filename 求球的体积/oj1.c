#include <stdio.h>
int main()
{
	const float pi = 3.14;
	float r;
	scanf_s("%f", &r);
	float v = 4 / 3.0 * pi * r * r * r;
	printf("%.2f", v);
	return 0;
}