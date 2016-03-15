#include<stdio.h>
main()
{
	int i,j,p=-1,n;
	printf("enter number of lines-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-i);j++)
		{
			printf("*");

		}
		for(j=0;j<p;j++)
		{
			printf(" ");
		}
		for(j=0;j<(n-i);j++)
		{
			printf("*");
			if((i==0)&&(j==0))
			{
				j++;
			}
		}
		p=p+2;
		printf("\n");
	}
}