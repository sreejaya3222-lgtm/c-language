// distance travelled by object
# include<stdio.h>
main()
{
	float u,t,o,d;
	printf("enter initial velocity ");
	scanf("%f",&u);
	printf("enter a acceleration");
	scanf("% f",& o);
	printf("enter time");
	scanf("%f",&t);
	d=u*t+0.5*o*t*t;
	printf(" the distance is %f",d);
}
