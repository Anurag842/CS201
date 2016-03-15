#include<stdio.h>
main()
{
	int n,i,d,rev=0;
	printf("enter number");
	scanf("%d",&n);
	for(int i=n;i!=0;i/=10)
	{
		int d=i%10;
		rev=rev*10+d;
	}
	if(rev==n)
		printf("palindrome");
	else
		printf("not palindrome");
}