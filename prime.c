// printing the prime numbers between the range  
#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, low, high, count;
    clrscr();
    printf("Enter the range : ");
    scanf("%d %d", &low, &high);
    printf("Prime numbers are ");
    // loop for checking prime numbers
    for (int i = low; i <= high; i++)
    {
        count = 0;
        // checking and printing prime numbers
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d ", i);
        }
    }
    getch();
}