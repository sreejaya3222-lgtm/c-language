// program on void pointer
#include<stdio.h>
main()
{
	void *p;
	int x=2;
	float y=4.3;
	p=&x;
	printf("the x value is %d\n",*(int*)p);
	printf("address of x is %d",p);
	p=&y;
	printf("the y value is %d",p);
	printf("address of y is %d",p);
}
