// maximum of 3 numbers using conditional operators 
#include<stdio.h>
main()
{
	int a,b,c,max;
	printf(" enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b)?((a>c)?a:c):((a>c)?b:c);
	printf("the max number is % d",max);
}
