#include<stdio.h>

bool timso(int a,int mang[], unsigned int n)
{
	for(int i=0;i<n;i++)
	{
		if(a==mang[i])
		{
			printf("so %d co nam trong mang",a);
			return true;
		}
	}
	
	printf("so %d khong nam trong mang",a);
	return false;
}

int main()
{
	int a;
	printf("Nhap a:");
	scanf("%d",&a);
	
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu %d:",i);
		scanf("%d",&arr[i]);
	}
		
	timso(a,arr,n);
	return 0;
}
