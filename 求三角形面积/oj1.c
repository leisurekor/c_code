#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, s, p;
	scanf_s("%f %f %f", &a, &b, &c);
	p = (a + b + c) / 2.0;
	s = sqrt(p*(p - a)*(p - b)*(p - c));
	printf("%.2f", s);
	return 0;
}