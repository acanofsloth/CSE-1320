// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab2 Q2
#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 20
void doesItPair(int arr[], int product, int check, int loc);

void main()
{
    int arr[ARR_SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}, target[5] = {10,20,40,100,570};
    for(int count = 0; count < sizeof(target)/4;count++)
    {
        doesItPair(arr,target[count],0,0);
    }
    printf("\n");
}

void doesItPair(int arr[], int product, int check, int loc)
{
    printf("\n\nPairs with product = %d:\n",product);

    while(loc < ARR_SIZE)
    {
        for(int loc2 = loc; loc2 < ARR_SIZE;loc2++)
        {
            if (arr[loc]*arr[loc2] == product)
            {
                printf("(%d, %d) ",arr[loc],arr[loc2]);
                check++;
            }
        }
        loc++;
    }
    if(check == 0)
    {
        printf("No pair found");
    }
}
