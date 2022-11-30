//adding the numbers in power wise
#include <stdio.h>
#include<math.h>

void main()
{
    int n,i,r,powr=0;
    printf("Enter the number and range : ");
    scanf("%d %d",&n,&r);
    for (int i = 0; i <= r; i++)
    {
        powr = powr + pow(n,i);
        
    }
    printf("%d ",powr);
    
    
}