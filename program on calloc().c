// program on calloc()
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr;
	printf("enter number of elements:");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	printf("enter elements of array:");
	for(i=0;i<n;++i)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;++i)
	{
		printf("%d",*(ptr+i));
	}
	free(ptr);
	return 0;
}
