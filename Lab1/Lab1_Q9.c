// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab1 Q9
#include<stdio.h>
int main()
{
    int num,temp = 0,test = 0,count = 2, loop;
    int arrayN[30];
    printf("Please enter a number between 90 and 200.\n");
    scanf("%d",&num);
    if(num >= 90 && num <= 200)
    {
        arrayN[0] = 0;
        arrayN[1] = 1;
        while(temp == 0)
        {
            test = arrayN[count-2] + arrayN[count-1];
            if(test < num)
            {
                arrayN[count] = test;
                count++;
            }
            else
            {
                temp = 1;
            }
        }
        printf("\n\nFibonacci numbers below %d:\n", num);
        for(loop = 0; loop < count;loop++)
        {
            printf("%d ",arrayN[loop]);
        }
    }
}
