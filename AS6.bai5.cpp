#include<stdio.h>
int main()
{
	int mang[10];
	
	for(int i=0;i<10;i++)
	{
		printf("Nhap cac phan tu cua mang:");
		scanf("%d",&mang[i]);
	}
	
	for(int i=0;i<10;i++)
	{
		int so_nghich_dao=0,a;
		while(mang[i]>0)
		{
		a=mang[i]%10;
		so_nghich_dao=so_nghich_dao*10 + a;
		mang[i]=mang[i]/10;
		}
	
		printf("%d\n",so_nghich_dao);	
	}
}
