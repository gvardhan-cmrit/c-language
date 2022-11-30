// sum of the digits
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, r, count = 0;
    //clrscr();
    printf("Enter the number : ");
    scanf("%d", &n);

    // loop
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        count = count + r;
    }
    printf("%d", count);
    getch();
}