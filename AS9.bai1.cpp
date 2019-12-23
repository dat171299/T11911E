#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	
	char s[50];
	printf("Nhap chuoi s:");
	scanf("%s",s);
	
	char arr[n][50];
	for(int i=0;i<n;i++)
	{
		printf("Nhap chuoi thu %d:\n",i);
		scanf("%s",arr[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		if(strcmp(s,arr[i])==0)
		{
			printf("s nam trong mang");
			return 0;
		}
		
	}
	printf("s khong nam trong mang");
	return 0;
}
