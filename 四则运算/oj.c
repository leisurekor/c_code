#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char s;
    int x, y;
    scanf("%d%c%d", &x, &s, &y);

    if (s == '+') {
        printf("%d+%d=%d", x, y, x + y);
    }
    if (s == '-') {
        printf("%d-%d=%d", x, y, x - y);
    }
    if (s == '*') {
        printf("%d*%d=%d", x, y, x * y);
    }
    if (s == '/') {
        printf("%d/%d=%d", x, y, x / y);
    }
    if (s == '%') {
        printf("%d%%%d=%d", x, y, x % y);
    }
    return 0;
}
