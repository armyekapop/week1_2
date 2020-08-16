#include<stdio.h>
int main()
{
	float a, b, c, d;
	scanf_s("%f%f%f", &a, &b, &c);
	d = a + b + c;
	printf("%.2f", d / 3);
	return 0;
}
