#include <stdio.h>

void printTable(int n, int l);

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);    

    int l;
    printf("Enter the range : ");
    scanf("%d", &l);

    printTable(n,l);
    return 0;
}
void printTable(int n, int l){
    for(int i = 1; i <= l; i++){
        printf("%d x %d = %d \n", n,i,i*n);
    }
}
