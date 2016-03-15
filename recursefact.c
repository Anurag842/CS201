#include<stdio.h>
long int fact (int);
main()
{
	int n;long int f;
	printf("enter number whose factorial is to be caclulated-");
	scanf("%d",&n);
	f=fact(n);
	printf("\n%d",f);
}
long int fact (int n)
{
	if(n==1||n==0)
		return 1;
	else
		return (n*fact(n-1));
}