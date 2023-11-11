#include <stdio.h>
int main()
{
	int a = 0;
	while (a < 100)
	{
		if (a % 2 == 0)
			a++;
		else
		{
			printf("%4d", a);
			a++;
		}
	}
	return 0;
}