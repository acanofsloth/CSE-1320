// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab1 Q5
#include<stdio.h>
int main()
{
    int ArrayID[50];
    int count = 0,row = 0,col = 0,find,check;
    for(int loc = 0; loc < 50;loc++)
    {
        ArrayID[loc] = rand() % 100;
    }
    while(row < 10)
    {
        while(col < 5)
        {
            if(ArrayID[count] < 10)
            {
                printf("%d     ",ArrayID[count]);
            }
            else
            {
                printf("%d    ",ArrayID[count]);
            }
            count++;
            col++;
        }
        printf("\n");
        row++;
        col = 0;
    }
    printf("Please enter a number.\n");
    scanf("%d",&find);
    printf("You entered %d\n",find);
    count = 0, check = 0;
    while(count < 50)
    {
        if(ArrayID[count] == find)
        {
            printf("\n%d Found at index %d.\n",find,count);
            check++;
        }
        count++;
    }
    if(check == 0)
    {
        printf("\n%d NOT found.");
    }
}
