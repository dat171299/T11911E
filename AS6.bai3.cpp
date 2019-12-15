#include<stdio.h>
int main()
{
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	
	int mang[n];
	for(int i=0; i<n; i++)
	{
		printf("nhap phan tu cua mang:");
		scanf("%d",&mang[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		if(mang[i]<0)
		{
			mang[i]=0;
		}
	}
	
	for(int i=0; i<n;i++)
	{
		printf("phan tu cua mang so %d:%d\n",i,mang[i]);
	}
}
