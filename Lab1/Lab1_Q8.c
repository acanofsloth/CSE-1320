// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab1 Q8
#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
    char word[30];
    char test[30];
    printf("Please input a string.\n");
    scanf("%s",word);
    int len = strlen(word),count,check = 0;
    for(count = 0; count < len; count++)
    {
        printf("%c",word[count]);
        word[count] = tolower(word[count]);
    }
    for(count = 0; count < len; count++)
    {
        test[count] = word[len-1-count];
    }
    for(count = 0; count < len;count++)
    {
        if(word[count] != test[count])
        {
            check++;
        }
    }
    if(check == 0)
    {
        printf(" is a Palindrome");
    }
    else
    {
        printf(" is not a Palindrome");
    }
}
