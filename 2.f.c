// simple interest & compound intrest
#include<stdio.h>
#include<math.h>
main()
{
	float p,t,r,si,ci;
	printf(" enter the principal amount");
	scanf("%f",&p);
	printf("enter time period");
	scanf("%f",&t);
	printf("enter rate of interest");
	scanf("%f",&r);
	si=p*t*r/100;
	ci=p*pow(1+r/100,t)-p;
	printf("the si is % 0.2 f\n",si);
	printf("the ci is % 0.1 f",ci);
}
