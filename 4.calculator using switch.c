# include <stdio.h>
main()
{
	int n1,n2;
	char op;
	printf("enter two numbers");
	scanf("%d%d",&n1,&n2);
	printf("enter the operator(+,-,*,/,%)");
	scanf("\n");
	scanf("%c",&op);
	switch(op)
	{
    case '+':
    	printf("the sum is %d",n1+n2);
    	break;
    case '-'	:
    	printf("the dift is %d",n1-n2);
    	break;
    case '*':
    	printf("the multi is %d",n1*n2 );
    	break;
    case '/'	:
    	printf("the divis is %d",n1/n2);
    	break;
    case '%'	:
    	printf("the modulus is %d",n1%n2);
    	break;
    default:
    	printf("invalid operator");
    }
}
