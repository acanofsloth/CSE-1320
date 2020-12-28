// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab1 Q3
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two integers\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("Sum = %d\n",num1+num2);
    printf("Difference = %d\n",num1-num2);
    printf("Product = %d\n",num1*num2);
    printf("Quotent(Float) = %0.2f\n",(double)num1/num2);
    printf("Quotent(Integer) = %d\n",num1/num2);
    printf("Remainder(Integer) = %d",num1%num2);
}
