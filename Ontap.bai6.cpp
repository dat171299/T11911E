#include<stdio.h>

int main()
{
	int a,b,s=0;
	printf("nhap a:");
	scanf("%d",&a);
	
	printf("nhap b:");
	scanf("%d",&b);
	
    if(a>=b)
    {
    	printf("nhap lai");
	}
	else
	{
		for(int i=a;i<b;i++)
		{
			s=s+i;
		}	
		printf("tong = %d",s);
	}
return 0;
}
