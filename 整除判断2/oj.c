#include <stdio.h>
int main()
{
	int a;
	scanf_s("%d",&a);
	if (a % 5 == 0 && a % 7 == 0)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}