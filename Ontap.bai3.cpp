#include <stdio.h>
int main()
{
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	if(n<0){
		printf("nhap lai");
	}else if(n<3){
		printf("so thu:1");
	}else if(n<4){
		printf("so thu:2 ");
	}else{
		int x1=1, x2=1, x3=2;
		for (int i=4; i<=n; ++i)
		{
		x1=x2;
		x2=x3;
		x3=x1+x2;
	    }
	    	printf("so thu :%d",x3);
    }
	return 0;
}
