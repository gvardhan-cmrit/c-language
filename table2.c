//simple table printer using c
#include<stdio.h>

void main(){
    int n,i=1,max=10;
    printf("Enter the number : ");
    scanf("%d",&n);

    //loops
    while (i<=max)
    {
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }
    
}