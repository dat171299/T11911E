#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Nhap a: \n");
	scanf("%f",&a);
	printf("Nhap b: \n");
	scanf("%f",&b);
	printf("Nhap c: \n");
	scanf("%f",&c);
	if(a<b)
	{
if(a<c)
{
printf("%f la so nho nhat ",a);
}
else
{
	printf("%f la so nho nhat ",c);
}
	}
	else{
		if(b<c)
		{
		printf("%f la so nho nhat",b);
		}
		else{
			printf("%f la so nho nhat",c);
		}
	}
}
