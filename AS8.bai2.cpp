#include<stdio.h>
int timso(int n)
{
	int x1=1,x2=1,x3=2;
	if(n==1)
	{
		printf("so thu %d la %d",n,x1);
		return x1;
	}
	if(n==2)
	{
		printf("so thu %d la %d",n,x2);
		return x2;
	}
	if(n==3)
	{
		printf("so thu %d la %d",n,x3);
		return x3;
	}
	for(int i=3;i<n;i++)
	{
		x1=x2;
		x2=x3;
		x3=x1+x2;
	}
	printf("so thu %d la %d",n,x3);
	return x3;
}
int main()
{
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	
	timso(n);
	return 0;
}
