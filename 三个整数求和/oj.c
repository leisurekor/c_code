#include <stdio.h>
int main()
{
	long a, b, c;
	scanf_s("%ld  %ld  %ld", &a, &b, &c);
	long sum = a + b + c;
	printf("%ld", sum);
	return 0;
}
