#include <stdio.h>
#define  _CRT_SECURE_NO_WARNINGS 
int main()
{
	const double pi = 3.1415926;
	const float fe = 7.86;
	const float au = 19.3;
	int d1, d2;
	scanf_s("%d %d", &d1, &d2);
	double m1, m2;
	m1 = 4.0 / 3.0 * pi * (d1 / 2.0 * d1 / 2.0 * d1 / 2.0) * fe  / 1000.0;
	m2 = 4.0 / 3.0 * pi * (d2 / 2.0 * d2 / 2.0 * d2 / 2.0) * au / 1000.0;
	printf("%.3f %.3f", m1, m2);
	return 0;
}