#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float denta,x1,x2,x;
	
	printf("Nhap a: \n");
	scanf("%d",&a);
	
	printf("Nhap b: \n");
	scanf("%d",&b);
	
	printf("Nhap c: \n");
	scanf("%d",&c);
	
	x=(-b)/2*a;
	
	x1=(-b+sqrt(denta))/2*a;
	
	x2=(-b-sqrt(denta))/2*a;
	
	denta= pow(b,2)-4*a*c;
	
    if(denta==0)
    {
	printf("phuong trinh co nghiem kep %f",x);
	}
	else
	{
	if(denta>0)
	{
	printf("phuong tinh co 2 nghiem phan biet: %f va %f",x1,x2);
	}
	else
	{
		printf("phuong trinh vo nghiem");
	}
	}
	}
