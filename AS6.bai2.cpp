#include<stdio.h>
int main()
{
	int n,count=0;
	float s=0;
	printf("nhap n:");
	scanf("%d",&n);
	
	int mang[n];
	for(int i=0; i<n; i++)
	{
		printf("nhap phan tu cua mang:");
		scanf("%d",&mang[i]);
	}
	
	for(int i=0; i<n; i++)
	{
		if((mang[i]%2!=0)&&(i%2==0))
		{
			s=s+mang[i];
			count++;
		}
	}
	float tb=s/count;
	printf("tong tb cac so le o vi tri chan la: %f",tb);
	return 0;
}
