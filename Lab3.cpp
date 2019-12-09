#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	

	printf("Nhap a:");
	scanf("%f",&a);
	
	printf("Nhap b:");
	scanf("%f",&b);
	
	printf("Nhap c:");
	scanf("%f",&c);


	
	if( ((a+b)>c)&&((a+c)>b)&&((c+b)>a) )
	{
		float p,s;
			s=(sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4);
	p=a+b+c;
		printf("a,b,c la 3 canh cua 1 tam giac");
		printf("chu vi tam giac la: %f",p);
		printf("Dien tich tam giac la: %f",s);
	}
	
	
	return 0;
}

