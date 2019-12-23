#include<stdio.h>
#include<string.h>
bool kiemtra(char s1[],char s2[])
{
	int j=0;
	for(int i=0;i<strlen(s1);i++)
	{
		if(s1[i]==s2[j])
		{
			j++;
		}
	}
	if(j==strlen(s2))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	char s1[50];
	printf("nhap chuoi s1:");
	scanf("%s",s1);
	
	char s2[50];
	printf("nhap chuoi s2:");
	scanf("%s",s2);
	
	if(	kiemtra(s1,s2))
	{
		printf("s2 nam trong s1");
		return 0;
	}
	else
	{
		printf("s2 khong nam trong s1");
		return 0;
	}
	
}
