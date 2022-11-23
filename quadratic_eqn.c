#include<stdio.h>
#include<conio.h>
#include<math.h>

void rootsFinder(float a, float b, float c);

int main(){
    float a,b,c;
    printf("Enter the value of a : ");
    scanf("%f", &a);
    printf("Enter the value of b : ");
    scanf("%f", &b);
    printf("Enter the value of c : ");
    scanf("%f", &c);
    rootsFinder(a,b,c);
}

void rootsFinder(float a,float b, float c){
    float r = -b/(2*a);
    float d = b*b - (4*a*c);
    if (d<0)
    {
        printf("Roots are imaginary \n");
        
    }else{
        
        if (d==0)
        {
            printf("Roots are Real and equal & roots are r = %f \n", r);
        }else{
            printf("Roots are real and not equal \n");
            float r1 = r + sqrt(d)/(2*a); 
            float r2 = r - sqrt(d)/(2*a);
            printf("r1 = %f, r2 = %f", r1,r2);
        }
    }
}
    