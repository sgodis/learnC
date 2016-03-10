#include <stdio.h>
int main(void)
{
	int i, j;
	int a, *pa;
	pa = &a;
	int b[] = {1,2,3,4,5}, *pb;
	//pb = b;
	pb = &b[0];
	pb = pb + 2;
	for(i = 0; i < 5; i++){
		printf("b[%d] = %d\n", i, b[i]);
	}
	printf("b[2] = %d\n", *pb);
	int c, *pc = &c;
	char *pd;
	pd = "C Language";
	return 0;
}
