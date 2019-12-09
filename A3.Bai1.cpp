#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Nhap a:");
	scanf("%d",&a);
	
	printf("Nhap b:");
	scanf("%d",&b);
	
	if(a>=b)
	{
		float c = (float)a/b;
		printf("in ra %f",c);
	}
	
	else
	{
	
	int c = a*b;
	printf("in ra %d",c);
	
	}
	
}
