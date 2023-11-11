char shift(char x[], int y)
{
	int  b,i;
i = 0;
b = x[i];
while (b != 0)
{
	b = (b - 'z' + 25 + y) % 26 + 'a';
	x[i] = b;
	i++;
	b = x[i];
}
}
#include <stdio.h>
int main()
{
	int key = 0;
	char a[100];
	gets(a);
		while (key < 26)
	{
	   shift(a, key);
	   puts(a);
	   key++;
	}
	return 0;
}
