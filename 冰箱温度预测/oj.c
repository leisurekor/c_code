#include <stdio.h>
int main()
{
	int h, m;
	scanf_s("%d %d", &h, &m);
	float t = h + m / 60.0;
	float T = 4 * t * t / (t + 2) - 20;
	printf("%.2f", T);
	return 0;
}