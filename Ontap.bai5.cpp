#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	
	
	for(int i=2;i<n;i++)
	{
		int j=0;
		for(int count=2 ;count<=sqrt(i) ;count++)
		{
			if(i%count==0)
			{
				j++;
			}
			
		}
		if(j==0)
			{
				printf("%d\n",i);
			}
   }
   return 0;
}
		
