#include<stdio.h>
int timhang(int a[4][4],unsigned int n)
{
	int max=0;
	for(int i=0;i<4;i++)
	{
		int s=0;
		for(int j=0;j<4;j++)
		{
			s=s+a[i][j];
		}
		if(s>=max)
		{
			max=s;
		}
	}
	printf("hang co tong lon nhat:%d",max);
	return max;
}
int main()
{
	int arr[4][4];
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("Nhap phan tu so arr[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	timhang(arr,4);
}
