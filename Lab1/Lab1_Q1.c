// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab1 Q1
#include<stdio.h>
int main() {
    int x, y;
    printf("\nInput an integer for x: ");
    scanf("%d", &x);
    printf("\nInput an integer for y: ");
    scanf("%d", &y);
    printf("\nx = %d & y = %d\n",x,y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("\nx = %d & y = %d\n",x,y);
}
