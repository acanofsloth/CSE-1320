// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab2 Q4
#include <stdio.h>
int sum_digits(int num1);
int sum_digits_recursion(int num1);

void main()
{
 int input;
 printf("Input an integer to find the sume of its digits.\n\n");
 scanf("%d",&input);
 printf("\n\n\nSum of the digits of the number %d is %d.",input,sum_digits(input));
 printf("\n\n\n\nSum of the digits of the number %d via recursive fuction is %d.\n",input,sum_digits_recursion(input));
}

int sum_digits(int num1)
{
  int count = 0, temp = num1, x=0;
  while(temp > 0)
  {
   temp = temp/10;
   count++;
  }
  int arr[count];
  switch(count)
  {
   case 10:
    arr[9] = (num1 - num1%1000000000)/1000000000;
    x = arr[9]*1000000000+x;
   case 9:
    arr[8] = ((num1 - x) - num1%100000000)/100000000;
    x = arr[8]*100000000+x; 
   case 8:
    arr[7] = ((num1 - x) - num1%10000000)/10000000;
    x = arr[7]*10000000+x; 
   case 7:
    arr[6] = ((num1 - x) - num1%1000000)/1000000;
    x = arr[6]*1000000+x;
   case 6:
    arr[5] = ((num1 - x) - num1%100000)/100000;
    x = arr[5]*100000+x; 
   case 5:
    arr[4] = ((num1 - x) - num1%10000)/10000;
    x = arr[4]*10000+x;
   case 4:
    arr[3] = ((num1 - x) - num1%1000)/1000;
    x = arr[3]*1000+x;
   case 3:
    arr[2] = ((num1 - x) - num1%100)/100;
    x = arr[2]*100+x;
   case 2:
    arr[1] = ((num1 - x) - num1%10)/10;
    x = arr[1]*10+x;
   case 1:
    arr[0] = (num1 - x);
    x = arr[0] + x;
    break;
   default:
    break;
  }
  temp = 0;
  for(int i = 0; i < count;i++)
  {
   temp = temp + arr[i];
  }
  return temp;
}

int sum_digits_recursion(int num1)
{
 if(num1 > 1000000000)
 {
  int x = (num1 - num1%1000000000)/1000000000;
  return x + sum_digits_recursion(num1%1000000000);
 }
 if(num1 > 100000000)
 {
  int x = (num1 - num1%100000000)/100000000;
  return x + sum_digits_recursion(num1%100000000);
 }
 if(num1 > 10000000)
 {
  int x = (num1 - num1%10000000)/10000000;
  return x + sum_digits_recursion(num1%10000000);
 }
 if(num1 > 1000000)
 {
  int x = (num1 - num1%1000000)/1000000;
  return x + sum_digits_recursion(num1%1000000);
 }
 if(num1 > 100000)
 {
  int x = (num1 - num1%100000)/100000;
  return x + sum_digits_recursion(num1%100000);
 }
 if(num1 > 10000)
 {
  int x = (num1 - num1%10000)/10000;
  return x + sum_digits_recursion(num1%10000);
 }
 if(num1 > 1000)
 {
  int x = (num1 - num1%1000)/1000;
  return x + sum_digits_recursion(num1%1000);
 }
  if(num1 > 100)
 {
  int x = (num1 - num1%100)/100;
  return x + sum_digits_recursion(num1%100);
 }
 if(num1 > 10)
 {
  int x = (num1 - num1%10)/10;
  return x + sum_digits_recursion(num1%10);
 }
 if(num1 > 0)
 {
  int x = num1%10;
  return x;
 }
 else
 {
  return num1;
 }
}
