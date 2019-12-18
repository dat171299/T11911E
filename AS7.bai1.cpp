#include<stdio.h>
int main()
{
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	
	int mang[n];
	
	for(int i=0;i<n;i++)
	{
		printf("Nhap vao phan tu cua mang:");
		scanf("%d",&mang[i]);
	}
	
	int x;
	printf("Nhap vao x:");
	scanf("%d",&x);
	
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(x==mang[i])
		{
			printf("x co nam trong mang\n");
			printf("vi tri gan nhat cua x la %d va %d",i-1,i+1);
			return 0;
		}
		count++;
	}
	if(count==n)
	{
		printf("x khong nam trong mang");
	}
	return 0;

}
