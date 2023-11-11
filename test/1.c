//Çó1£¡+2£¡+.......+10!
#include <stdio.h>
int jc(int x)
{
	int y = 1;
	int result = 1;
	while (x > y )
	{
		y++;
		result *= y;
	}
	return result;
}
int main()
	{
	int num;
	int sum = 0;
	int z = 1;
	scanf_s("%d", &num);
	while (num >=z )
	{
		sum += jc(z);
			z++;
	}
	printf("%d", sum);
	}