// calculator program

#include <stdio.h>
#include <conio.h>

void main()
{
    float a, b;
    char op;
    printf("Enter an operator (+, -, *, /,%%,[a]verage): ");
    scanf("%c", &op);
    printf("Enter the 2 numbers : ");
    scanf("%f %f", &a, &b);
    switch (op)
    {
    case '+':
        printf("%f + %f = %f", a, b, a + b);
        break;
    case '-':
        printf("%f - %f = %f", a, b, a - b);
        break;
    case '*':
        printf("%f x %f = %f", a, b, a * b);
        break;
    case '/':
        printf("%f / %f = %f", a, b, a / b);
        break;
    case 'a':
        printf("Average of %f & %f = %f", a, b, (a + b)/2);
        break;
    default:
        break;
    }
}