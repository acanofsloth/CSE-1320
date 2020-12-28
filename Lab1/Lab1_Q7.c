// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab1 Q7
#include<stdio.h>
int main()
{
    int array[5] = {32, 100, 56, 69, 21},temp, count = 0, loc = 1;
    int length = sizeof(array)/sizeof(int);
    while (count < length)
    {
        printf("%d ", array[count]);
        count++;
    }
    count = 0;
    while (count < length)
    {
        while (loc < length)
        {
            if(array[count] < array[loc])
            {
                temp = array[count];
                array[count] = array[loc];
                array[loc] = temp;
            }
            loc++;
        }
        count++;
        loc = count+1;
    }
    printf("\n\n");
    count = 0;
    while (count < length)
    {
        printf("%d ", array[count]);
        count++;
    }
}
