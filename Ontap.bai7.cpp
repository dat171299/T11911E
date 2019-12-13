#include<stdio.h>

int main()
{
	int n,i=0;
	printf("nhap n:");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
		i++;
	}
	printf("so chu so cua n:%d",i);
	return 0;
}
