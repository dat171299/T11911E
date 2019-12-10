#include<stdio.h>
int main()
{
	int n,giaithua=1;
	printf("Nhap n:");
	scanf("%d",&n);
	
	for(int i;i<=n;i++)
	{
		giaithua=giaithua*i;
	}
	
	printf("n! = %d",giaithua);
	return 0;
}
