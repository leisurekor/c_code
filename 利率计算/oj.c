#include <stdio.h>
int main()
{
	float r, n, p = 1.0;
	scanf_s("%f %f", &r, &n);
	int i;
	for (i = 0; i < n; i++)
		p *= (1 + r);
	printf("%.2f", p);
	return 0;
}