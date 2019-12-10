#include<stdio.h>

int main()
{
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	
	if(n==2)
	{
		printf("n la so nguyen to");
	}
	else{

	for(int i=2; i<n; i++)
	{
        if(n%i==0)
        {
        	printf("n khong phai so nguyen to");
        	break;
		}
            else
			{
            	if(n=i+1)
            	printf("n la so nguyen to");
			}
			
			
	}
	
}
	return 0;
}
