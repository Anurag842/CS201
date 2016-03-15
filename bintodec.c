#include<stdio.h>
#include<math.h>
main()
{
int dn,rd,bn=0,i=0;
printf("enter decimal no-");
scanf("%d",&dn);
while(dn!=0)
{
	rd=dn%10;
	bn+=rd*pow(2,i);
	dn=dn/10;
	i++;
}
printf("\nbinary equivalent is %d",bn);
}