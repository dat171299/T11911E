#include<stdio.h>
int main()
{
	int matran[4][4];
	float duong_cheo1,duong_cheo2;
	float tb;
	//nhap mang
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("nhap phan tu so matran[%d][%d]",i,j);
			scanf("%d",&matran[i][j]);
		}
	}

	duong_cheo1=matran[0][3]+matran[1][2]+matran[2][1]+matran[3][0];
	duong_cheo2=matran[0][0]+matran[1][1]+matran[2][2]+matran[3][3];

	tb=(duong_cheo1+duong_cheo2)/2;
	printf("trung binh duong cheo = %f",tb);
}
