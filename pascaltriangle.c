#include<stdio.h>
main()
{
	int i,j,r,ncr=1;
	printf("enter number of rows-");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		for(j=1;j<(r-i);j++)
		{
			printf("  ");
		}
		for(j=0;j<=i;j++)
		{
			if(j==0||i==0)
			{
				ncr=1;
				printf("%d ",ncr);
			}
			else
			{
				ncr=ncr*(i-j+1)/j;
				printf("%d ",ncr);
			}

		}
		printf("\n\n");
	}
}