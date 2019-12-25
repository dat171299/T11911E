#include<stdio.h>
#include<math.h>
double tinhchuvi(double a,double b,double c)
{
	double P;
	P=a+b+c;
	printf("Chu vi cua tam giac la:%lf\n",P);
	return P;
}

double tinhdientich(double a,double b,double c)
{
	double S;
	double p;
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Dien tich cua tam giac la:%lf",S);
	return S;
}
int main()
{
	double a,b,c;
	do
	{
	printf("Nhap vao 3 canh cua tam giac:\n");
	
	printf("Nhap canh thu nhat:\n");
	scanf("%lf",&a);
	
	printf("Nhap canh thu hai:\n");
	scanf("%lf",&b);
	
	printf("Nhap canh thu ba:\n");
	scanf("%lf",&c);
	}
	while((a<0||b<0||c<0)||( (a+c)<=b || (b+c)<=a || (a+b)<=c ));
		
		tinhchuvi(a,b,c);
		tinhdientich(a,b,c);
	
	return 0;
}
