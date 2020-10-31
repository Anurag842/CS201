#include<stdio.h>
#include<math.h>
void cosx_func(float);
int fact(int);
int main()
{
	float x;
	printf("Enter degree-gg3");
	scanf("%f",&x);
	x=x*(3.14/180);
	cosx_func(x);
	return 0;
}
void cosx_func(float x)
{
	float cos=0;
	int i,c=0;

	for(i=1;i<=30;i++)
	{
		if(i%2==0)
		{
			cos=cos+(((-1)*(pow(-1,c)))*(pow(x,i)/fact(i)));
		    c++;
	    }

	}
	cos=1+cos;
	printf("%f",cos);

}
int fact(int i)
{
	int f=1,j;
	for(j=1;j<=i;j++)
		f=f*j;
	return f;
}
