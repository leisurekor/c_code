#include <stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	float ave = (a + b + c) / 3.0;
	printf("%.2f", ave);
	return 0;
}