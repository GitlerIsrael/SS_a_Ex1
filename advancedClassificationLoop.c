#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int isPalindrome(int num)
{
    int temp=num;
    int reverse=0;
    int reminder=0;
    while(temp!=0)
    {
        reminder=temp%10;
        reverse=(reverse*10)+reminder;
        temp=temp/10;
    }
    if(reverse==num)
    {
        return 1;
    }
    return 0;
}
int isArmstrong(int num)
{
   int temp=num;
   int count=0;
   int sum=0;
   int reminder=0;
   while(temp!=0)
   {
       temp=temp/10;
       count++;
   }
   temp=num;

   while(temp!=0)
   {
       reminder=temp%10;
       sum=sum+ pow(reminder,count);
       temp=temp/10;
   }
   if(sum==num)
   {
        return 1;
   }
   return 0;

}
