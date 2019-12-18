#include<stdio.h>
int main()
{
	int a[4][3], b[4][3],c[4][3];
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Nhap phan tu thu a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	 printf("\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Nhap phan tu thu b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	// cong hai ma tran
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("a[4][3]+b[4][3]=\n");
	for(int i=0;i<4;i++)
	{
		
		for(int j=0;j<3;j++)
		{
			printf("%d \t",c[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
	// tru 2 ma tran
		for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	
		printf("a[4][3]-b[4][3]=\n");
	for(int i=0;i<4;i++)
	{
		
		for(int j=0;j<3;j++)
		{
			printf("%d \t",c[i][j]);
			
		}
		printf("\n");
	}
}
