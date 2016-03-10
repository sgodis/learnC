#include <stdio.h>
int main(void)
{
	int i, j;
	int a[10], *pa;
	pa = a;
	for(i = 0; i < 10; i++){
		*pa++ = i;
	}
	//循环过程结束，pa变量内容已经改变，不是a数组的首地址，如果上一for循环后 pa不指向回 a 数组首地址，pa地址继续在上一for循环结束后，在下一for循环继续改变。
	pa = a;
	for(i = 0; i < 10; i++){
		printf("a[%d] = %d \n", i, *pa++);
	}
}
