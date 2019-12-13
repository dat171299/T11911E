#include<stdio.h>
int main()
{
	int n,x,s=0;
	printf("nhap n:");
	scanf("%d",&n);
	
	while(n>0)
	{
		x=n%10;
		s=s+x;
		n=n/10;
	}
	printf("tong cac chu so =%d",s);
	return 0;
}
