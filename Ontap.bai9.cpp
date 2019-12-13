#include<stdio.h>
int main()
{
	int a,b,s;
	printf("nhap a:");
	scanf("%d",&a);
	
	printf("nhap b:");
	scanf("%d",&b);
	
	if(a>=b)
	{
		for(int i=1; i<=b;i++)
		{
			if(b%i==0)
			{
				s=i;
			}
			else
			{
				continue;	
			}
		}
		printf("so uoc chung lon nhat:%d",s);
	}
	else
	{
		for(int i=1; i<=a; i++)
		{
			if(a%i==0)
			{
				s=i;	
			}
			else
			{
				continue;
			}	
		}
		printf("so uoc chung lon nhat:%d",s);	
	}
	return 0;
}
