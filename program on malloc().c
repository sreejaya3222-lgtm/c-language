// program on malloc()
#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,n;
	printf("enter n value");
	scanf("%d",&n);
	int *p=(int*)malloc(n*sizeof(int));
	printf("enter %d elements",n);
	for(i=0;i<n;i++)
	scanf("%d",p+i);
	printf("the array elements are :\n");
	for(i=0;i<n;i++)
	printf("%d\t",*(p+i));
}
