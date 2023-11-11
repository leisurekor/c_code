#include <stdio.h>
int main()
{
	char a, b, c, d, e;
	scanf_s("%c %c %c %c %c",&a, &b, &c, &d, &e);
	a = a + 3;
	b = b + 3;
	c = c + 3;
	d = d + 3;
	e = e + 3;
	printf("%c%c%c%c%c", a,b,c,d,e);
	return 0;
}