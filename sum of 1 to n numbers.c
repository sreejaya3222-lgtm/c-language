#include <stdio.h>
int sum_n(int);
main() 
 {
    int n, sum;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    sum= sum_n(n); 
    printf("Sum of numbers from 1 to %d = %d\n", n,sum);
    return 0;
}
int sum_n(int n)
 {
    int i, sum = 0;
    for (i = 1; i <= n; i++) 
	{
        sum=sum+i;               
    }               
}

