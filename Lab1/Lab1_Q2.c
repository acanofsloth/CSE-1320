// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab1 Q2
#include<stdio.h>
int main()
{
    int num, check = 1;
    while (check == 1)
    {
        printf("\nEnter a number greater than 10 and less than 20\n");
        scanf("%d",&num);
        if (num > 10 && num < 20)
        {
            check = 0;
        }
        else
        {
            printf("\nThat number does not qualify!\n");
        }
    }
    for (int row = num; row > 0; row = row - 2)
    {
        for (int col = row; col > 0; col--)
        {
            printf("*");
        }
        printf("\n");
    }
}
