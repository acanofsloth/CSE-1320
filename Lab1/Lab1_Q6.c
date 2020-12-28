// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab1 Q6
#include<stdio.h>
int main()
{
    int ArrayID[10],input;
    for(int count = 0;count < 10;count++)
    {
        printf("Input (%d/10) number in sorted order. \n",count+1);
        scanf("%d",&input);
        ArrayID[count] = input;
    }
    printf("Input a number to search.\n");
    scanf("%d",&input);
    if(input <= ArrayID[9]/2)
    {
        if(input < ArrayID[2])
        {
            if(input == ArrayID[0])
            {
                printf("The index of the target is 0");
            }
            else if(input == ArrayID[1])
            {
                printf("The index of the target is 1");
            }
            else
            {
                printf("Searched value can not be found");
            }
        }
        else if(input > ArrayID[2])
        {
            if(input == ArrayID[3])
            {
                printf("The index of the target is 3");
            }
            else if(input == ArrayID[4])
            {
                printf("The index of the target is 4");
            }
            else
            {
                printf("Searched value can not be found");
            }
        }
        else
        {
            if(input == ArrayID[2])
            {
                printf("The index of the target is 5");
            }
        }
    }
    else
    {
        if(input < ArrayID[7])
        {
            if(input == ArrayID[5])
            {
                printf("The index of the target is 5");
            }
            else if(input == ArrayID[6])
            {
                printf("The index of the target is 6");
            }
            else
            {
                printf("Searched value can not be found");
            }
        }
        else if(input > ArrayID[7])
        {
            if(input == ArrayID[8])
            {
                printf("The index of the target is 8");
            }
            else if(input == ArrayID[9])
            {
                printf("The index of the target is 9");
            }
            else
            {
                printf("Searched value can not be found");
            }
        }
        else
        {
            printf("The index of the target is 7");
        }
    }

}
