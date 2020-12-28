// Ivan Martinez
// UTA Spring 2020
// CSE-1320-007 Lab2 Q3
#include <stdio.h>
int rev_digits(int num1);

void main()
{
 int input, reversed;
 printf("Input an integer to be reversed.\n\n"); 
 scanf("%d",&input);
 reversed = rev_digits(input);
 printf("The difference between the original number %d and the reversed %d is %d\n", input, reversed, input-reversed);
}

int rev_digits(int num1)
{
 if (num1 > 1000000000)
 {
  return num1;
 }
 else
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
  for(int i = 0; i < (count/2);i++)
  {
   temp = arr[i];
   arr[i] = arr[count-i-1];
   arr[count-i-1] = temp; 
  }
  x = 0;
  switch(count)
  {
   case 10:
    x = arr[9]*1000000000+x;  
   case 9:
    x = arr[8]*100000000+x; 
   case 8:
    x = arr[7]*10000000+x; 
   case 7:
    x = arr[6]*1000000+x; 
   case 6:
    x = arr[5]*100000+x;  
   case 5:
    x = arr[4]*10000+x; 
   case 4:
    x = arr[3]*1000+x; 
   case 3:
    x = arr[2]*100+x; 
   case 2:
    x = arr[1]*10+x;
   case 1: 
    x = arr[0]+x;
    break;
   default:
    break;
  }
  return x;
 }
}  
