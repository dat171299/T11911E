#include<stdio.h>
int main()
{
	float a,b,c;
	
	
	do
	{
		printf("Nhap a:\n:");
	scanf("%f",&a);
	
	printf("Nhap b:\n");
	scanf("%f",&b);
	
	printf("Nhap c:\n");
	scanf("%f",&c);
	}
	while((a+b<c)||(a+c<b)||(b+c<a));
    printf("a,b,c la 3 canh cua mot tam giac");

}
