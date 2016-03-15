#include<stdio.h>
#include<math.h>
main()
{
	int b,a,c,D;

printf("\nEnter a,b,c-");
scanf("%d %d %d",&a,&b,&c);
float r1,r2;
D=b*b-4*a*c;
if(D<0)
	printf("The roots are imaginary and can't be found");
else
	{
	r1=(-b+sqrt(D))/(2*a);
	r2=(-b-sqrt(D))/(2*a);
if(D==0)
	printf("Roots are equal and real and they are %f and %f",r1,r2);
if(D>0)
	printf("Roots are unequal and real and they are %f and %f",r1,r2);
	}}
