//palindrome using c

#include<stdio.h>
#include<conio.h>

void main()
{
    int r,n,ans=0,temp;
    //clrscr();
    printf("Enter the number : ");
    scanf("%d",&n);
    temp = n;
    while (n!=0)
    {
        r=n%10;
        n=n/10;
        ans = ans * 10 + r;
    }
    if (temp==ans)
    {
        printf("The number %d is a palindrome ",ans);
    }
    else{
        printf("The number %d is not a palindrome",ans);
    }
    //getch();
    
}