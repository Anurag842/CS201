#include<stdio.h>
#include<math.h>
main()
{
int dn,rd,bn=0,i=0;
printf("enter decimal no-");
scanf("%d",&dn);
while(dn!=0)
{
	rd=dn%2;
	bn+=rd*pow(10,i);
	dn=dn/2;
	i++;
}
printf("\nbinary equivalent is %d",bn);
}