#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
 float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	float v;
	v = a * b * c;
	printf("%.3f", v);
	return 0;
}