#include <stdio.h>

void main()
{
    int n , mid = n / 2 + 1;
    printf("Enter the number : ");
    scanf("%d",&n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (row==1 || row==n || col==mid)
            {
                printf("* ");
            }
            else
            printf("  ");
            
        }
        printf("\n");
        
    }
    
}