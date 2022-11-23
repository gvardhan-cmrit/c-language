// positive and negative numbers checker
#include <stdio.h>
#include <conio.h>

void main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("0 is neither +ve nor -ve");
    }
    else
    {

        if (a > 0)
        {
            printf("%d is a +ve number \n", a);

        }
        else{
            printf("%d is a -ve number \n", a);
        }
    }
    
    
    
}