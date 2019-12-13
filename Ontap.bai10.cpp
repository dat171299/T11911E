#include<stdio.h>
int main()
{
	int n,x1=1,x2=1,x3=2;
	printf("nhap n:");
	scanf("%d",&n);
	
	for(int i=1;x3<n;i++)
	{
		
		x1=x2;
		x2=x3;
		x3=x1+x2;
	}
	printf("so fibo gan nhat :%d",x3-x1);
	return 0;
}
