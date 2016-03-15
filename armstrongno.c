#include<stdio.h>
main()
{
	int d,sum=0,num,a;
	printf("\nenter number-");
	scanf("%d",&num);
	for(int i=num;i!=0;i/=10)
	{
		int d=i%10;
		sum+=d*d*d;
	}
	if(num==sum)
		printf("\narmstrong no-");
	else
		printf("\nnot armstrong");
}