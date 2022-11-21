#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int isPrime(int num)
{
    if(num==0)
    {
        return 0;
    }
    if(num==1)
    {
        return 1;
    }
    int curr=sqrt(num);
    for (int i = 2; i < curr; i++)
    {
        if(num%i==0)
            return 0;
        else continue;
    }
    return 1;
}

int isStrong(int num)
{
    int n=num;
    int sum=0;
    while (n!=0) {
        int curr = n % 10;
        int fact = 1;
        for (int j = 1; j <= curr; j++)
        {
            fact = fact * j;
        }
        sum = sum + fact;
        n=n/10;
        if (sum>num)
        {
            return 0;
        }
    }
    if(sum==num)
    {
        return 1;
    }
    return 0;
}

