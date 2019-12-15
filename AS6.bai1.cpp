#include<stdio.h>
int main()
{
	int n;
	float s=0;
	printf("nhap n:");
	scanf("%d",&n);
	
	int mang[n];
	for(int i=0; i<n; i++)
	{
		printf("nhap phan tu cua mang:");
		scanf("%d",&mang[i]);
	}
	int count=0;
	for(int i=0; i<n; i++)
	{
		if(mang[i]%2!=0)
		{
			s=s+mang[i];
			count++;
		}
	}
	float tb=s/count;
	printf("tong trung binh cac so le cua mang la:%f",tb);
	return 0;
}
