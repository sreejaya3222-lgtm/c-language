// program on pointers
#include<stdio.h>
main()
{
	int x=2;
	int*p;
	p=&x;
	printf("the address of x is %ld",&x);
	printf("the adress of x is %ld",&p);
	printf("the value of x is %d",x);
	printf("the value of x is %d",*p);
}
