//gcd
#include<stdio.h>
int gcd(int,int);
main()
{
	int n1,n2;
	printf("enter two numbers");
	scanf("%d%d",&n1,&n2);
	printf("the gcd of %d and %d is %d",n1,n2,gcd(n1,n2));
}
int gcd(int n1,int n2)
{
	if(n2!=0)
	{
		return gcd(n2,n1%n2);
	}
	else
	{
		return n1;
	}
}
