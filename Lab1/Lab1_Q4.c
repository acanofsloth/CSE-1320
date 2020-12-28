// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab1 Q4
#include<stdio.h>
int main()
{
    int A[2][3] = {
    {-1, -2, 3},
    {4, 5, 6}
    };
    int B[2][3] = {
    {1, 2, 3},
    {-4, -5, 6}
    };
    border();
    printf(" A:\n");
    border();
    matrixprint(A);
    printf("\n");
    border();
    printf(" B:\n");
    border();
    matrixprint(B);
    border();
    printf(" C= A - B\n");
    border();
    matrixsubprint(A,B);
}
void border()
{
    printf("------------------\n");
}
void matrixprint(int array[2][3])
{
    int row = 0;
    while(row < 2)
    {
        for(int col = 0; col < 3; col++)
        if(array[row][col]<0)
        {
            printf(" %d     ",array[row][col]);
        }
        else
        {
            printf(" %d      ",array[row][col]);
        }
        printf("\n");
        row++;
    }
}
void matrixsubprint(int arrayA[2][3],int arrayB[2][3])
{
    int row = 0,val;
    while(row < 2)
    {
        for(int col = 0; col < 3; col++)
        {
            val = arrayA[row][col]-arrayB[row][col];
            if(val<0)
            {
                printf(" %d     ",val);
            }
            else if (val<10)
            {
                printf(" %d      ",val);
            }
            else
            {
                printf(" %d     ",val);
            }
        }
        printf("\n");
        row++;
    }
}
