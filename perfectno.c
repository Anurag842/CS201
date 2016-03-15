#include<stdio.h>
main()
{
	int i,num,sum=0;
	printf("\nenter number-");
	scanf("%d",&num);
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
			{
				sum=sum+i;
			}
			
	}
	if(num==sum)
		printf("\n perfect no");
	else
		printf("\n not perfect");
}