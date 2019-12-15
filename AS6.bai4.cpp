#include<stdio.h>
int main()
{

	int n;
	printf("nhap n:");
	scanf("%d",&n);
	
	int mang[n];
	
	for(int i=0;i<n;i++)
	{
		printf("nhap phan tu cua mang:");
		scanf("%d",&mang[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			if((mang[i]==mang[j])&&j!=i)
			{
				printf("NHAP LAI");
				return 0;
			}
			
		}
	}
	
	
	return 0;
}
