// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab2 Q1
#include <stdio.h>
#include <stdlib.h>
void swapCallByValue(int x1, int x2);
void swapCallByReference(int * px1, int * px2);

void main()
{
    int x1,x2;
    int * px1 = &x1;
    int * px2 = &x2;
    printf("Input a number for x1: ");
    scanf("%d",&x1);
    printf("\nInput a number for x2: ");
    scanf("%d",&x2);

    printf("\nOriginally \t\t\tx1 = %d and x2 = %d",x1,x2);
    swapCallByValue(x1,x2);
    printf("\nAfter swapCallByValue \t\tx1 = %d and x2 = %d",x1,x2);

    printf("\n\nOriginally \t\t\tx1 = %d and x2 = %d",x1,x2);
    swapCallByReference(px1,px2);
    printf("\nAfter swapCallByReference \tx1 = %d and x2 = %d\n",x1,x2);
}

void swapCallByValue(int x1, int x2)
{
    x1 = x1 + x2;
    x2 = x1 - x2;
    x1 = x1 - x2;
}

void swapCallByReference(int * px1, int * px2)
{
    int temp;
    temp = (*px1);
    (*px1) = (*px2);
    (*px2) = temp;
}
