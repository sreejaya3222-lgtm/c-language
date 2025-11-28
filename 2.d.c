//conversion of celsious temperature to farenheint
# include <stdio.h>
main()
{
	float ctemp,ftemp;
	printf(" enter temp ijn celusious");
	scanf("%f",&ctemp);
	ftemp=1.8*ctemp+32;
	printf(" the temperature in fareheit is % f",ftemp);
}
