#include<stdio.h>
int main()
{
	float x,y,z;
	printf("Nhap x: \n");
	scanf("%f",&x);
	
	printf("Nhap y: \n");
	scanf("%f",&y);
	
	z=x;
	x=y;
	printf("x = %f \n",x);
	
	y=z;
	printf("y = %f \n",y);
	
	
	}
