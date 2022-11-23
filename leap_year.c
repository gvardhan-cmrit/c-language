//c programme for leap year

#include <stdio.h>
#include <conio.h>

void main()
{
    int a;
    printf("Enter the year : ");
    scanf("%d", &a);
    if (a%4 == 0)
    {
        printf("%d is a leap year \n", a);

    }
    else{
        printf("%d is not a leap year \n", a);
    }
    
}