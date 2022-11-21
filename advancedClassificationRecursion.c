#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int sumStrong(int num,int count)
{
    if(num==0)
    {
        return 0;
    }
    return(pow(num%10,count)) + sumStrong(num/10,count);
}


int reverse(int num)
{
    int temp=num;
    int count=0;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    if(num==0)
    {
        return 0;
    }
    return ((num%10 * pow(10,count-1))+reverse(num/10));
}


int isPalindrome(int num)
{
    if (num==reverse(num))
    {
        return 1;
    }
    return 0;
}


int isArmstrong(int num)
{
    int temp=num;
    int count=0;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    if (num==sumStrong(num,count))
    {
        return 1;
    }
    return 0;
}













