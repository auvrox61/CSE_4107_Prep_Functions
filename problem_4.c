//Create a function that returns the sum of the digits of a given number recursively.

#include<stdio.h>

int sumDigits(int n){
    int sum=0;
    int digits;
    while(n!=0){
        digits=n%10;
        sum+=digits;
        n/=10;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    int result=sumDigits(n);
    printf("%d\n",result);
    return 0;
}