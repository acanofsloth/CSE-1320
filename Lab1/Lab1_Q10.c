// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab1 Q10
#include<stdio.h>
int main()
{
    char input;
    printf("Input a character\n");
    scanf("%c",&input);
    switch(input)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("%c is a vowel!!",input);
        break;
        default:
        printf("%c is NOT a vowel!!",input);
        break;
    }
}
