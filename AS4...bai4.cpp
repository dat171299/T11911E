#include <stdio.h>
int main()
{
    int n = 0;
    do
   {
    printf("nhap n:");
    scanf("%d",&n);
    }

    while(n <= 0);
    
    int nghichdao = 0;
    while(n > 0)
    {
     nghichdao = nghichdao*10 + n%10;
     n = n/10;
    }
   printf("so nghich dao:%d",nghichdao);
   
return 0;
}
