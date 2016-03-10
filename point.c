#include <stdio.h>
int main(void)
{
	int a, b, c;
	int *point1, *point2, *point3;
	a = 2;
	b = 2;
	c = 2;
	point1 = &a;
	point2 = &b;
	point3 = &c;
	printf("a=%d,b=%d\n", *point1, *point2);
	printf("*point1++ = %d\n", *point1++);
	printf("(*point2)++ = %d\n", (*point2)++);
	printf("(*point3++) = %d\n", (*point3++));
	return 0;
}
