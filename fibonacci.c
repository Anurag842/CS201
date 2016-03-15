#include<stdio.h>
main()
{
	int n,first=0,second=1,next,c;
	printf("\nenter number of numbers to be printed-");
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		if(c<=1)
			next=c;
		else
			next=first+second;
			first=second;
			second=next;
	printf("\n%d",next);
	}
}