#include<stdio.h>
main()
{
	int a=1;
	home:
	printf("\n%d",a);
	a++;
	
	if (a<=5)
		goto home;
}