//programme for rainbow colors
#include<stdio.h>
#include<conio.h>

void main()
{
    char colors;
    printf("* Rainbow Color C Programme * \n v - Violet \n i - indigo \n b - blue \n g - Green \n y - yellow \n o - orange \n r -red \n Enter any one alphabet : ");
    scanf("%c", &colors);

    switch (colors)
    {
    case 'v': 
    case 'V': printf("Violet");
        break;

    case 'i': 
    case 'I': printf("Indigo");
        break;

    case 'b': 
    case 'B': printf("Blue");
        break;

    case 'g': 
    case 'G': printf("Green");
        break;

    case 'Y': 
    case 'y': printf("Yellow");
        break;

    case 'o': 
    case 'O': printf("Orange");
        break;

    case 'r': 
    case 'R': printf("Red");
        break;
        
    default:
    printf("* Your Input reaches beyond limit *");
        break;
    }
}