#include <stdio.h>
#include "NumClass.h"

int main(){
    int x1,x2;
    scanf("%d", &x1);
    scanf("%d", &x2);


    printf("The Armstrong numbers are:");
    for (int i = x1; i <= x2 ; i++) {
        if(isArmstrong(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");

    printf("The Palindromes are:");
    for (int i = x1; i <= x2 ; i++) {
        if(isPalindrome(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");

    printf("The Prime numbers are:");
    for (int i = x1; i<= x2 ; i++) {
        if(isPrime(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");

    printf("The Strong numbers are:");
    for (int i = x1; i <= x2 ; i++) {
        if(isStrong(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");



}