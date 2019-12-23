#include<stdio.h>
#include<string.h>
void sapxep(char a[][50],unsigned int n)
{
	
	for (int i=0;i<n-1;i++){
	  	char swap[50];
	  	for (int j=0;j<n-i-1;j++)
		  {
	  		if (strcmp(a[j],a[j+1])>0)
			  {
	  			strcpy(swap,a[j+1]);
	  			strcpy(a[j+1],a[j]);
	  			strcpy(a[j],swap);
			  }
		  }
	  }
	for(int i=0;i<n;i++)
	{
		printf("%s",a[i]);
	}
}
int main()
{
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	
	char a[n][50];
	for(int i=0;i<n;i++)
	{
	printf("Nhap chuoi thu %d:",i);
	scanf("%s",a[i]);
	}
	sapxep(a,n);

	return 0;
}
