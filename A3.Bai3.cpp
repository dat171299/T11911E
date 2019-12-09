#include<stdio.h>
int main()
{
	int ngay, thang;
	printf("Nhap ngay:\n");
	scanf("%d",&ngay);
	
	printf("Nhap thang:");
	scanf("%d",&thang);
	
	int arr[13];
	arr[1]=arr[3]=arr[5]=arr[7]=arr[8]=arr[10]=arr[12]=31;
	arr[4]=arr[6]=arr[9]=arr[11]=30;
	arr[2]=28;
	
	int a=0;
	for(int i=1; i<=12; i++)
	{
		if(thang>i)
		{
			a=arr[i]+a;
		}
	}
	a+=ngay;
	int b=a%7;
	
	if(b==7)
	{
	printf("Ngay %d, thang %d la ngay thu %d trong nam va la chu nhat",ngay,thang,a);
	}
	else{
		printf("Ngay %d, thang %d la ngay thu %d trong nam va la thu %d",ngay,thang,a,b+1);
	}
return 0;
}
