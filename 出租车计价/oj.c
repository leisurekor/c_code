#include <stdio.h>
int main()
{
	float fee, s;
	int time;
	scanf_s("%f %d", &s, &time);
	if (s <= 3)
		fee = 10 + time / 5 * 2;
	if (s >= 3 && s <= 10)
		fee = 10 + time / 5 * 2 + (s - 3) * 2;
	if (s > 10)
		fee = 10 + time / 5 * 2 + 7 * 2 + (s - 10) * 3;
	if (fee >= (0.5 + (int)fee))
		fee = (int)fee + 1;
	if (fee <= (0.5 + (int)fee))
		fee = (int)fee;
	printf("%.0f", fee);
	return 0;
}