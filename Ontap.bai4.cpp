#include<stdio.h>
int main()
{
	int n,x1=1,x2=1,x3=2,tong=4;
	printf("nhap n:");
	scanf("%d",&n);
	
		if(n==0)
		{
			printf("nhap lai");
		}
		else{
			if(n==1){
				printf("tong : 1");
			}
			else{
				if(n==2)
				{
					printf("tong :2");
				}
				else{
					if(n==3)
					{
						printf("tong:4");
					}
					else{
						
							for(int i=4; i<=n;i++)
						{
		
							x1=x2;
	    					x2=x3;
	    				
	    					x3=x1+x2;
	    						tong=tong+x1+x2;
						}
						 printf("tong = %d",tong);
					}
				}
			}
		}
}
