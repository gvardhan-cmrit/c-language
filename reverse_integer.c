//printing numbers in reverse order
#include<stdio.h>
#include<conio.h>

void main(){
    int n,r,ans=0;
    //clrscr();
    printf("Enter the number : ");
    scanf("%d",&n);
    while (n!=0)
    {
        r=n%10;
        n=n/10;
        ans=ans*10+r;
    }
    printf("%d",ans);
    getch();
    
}