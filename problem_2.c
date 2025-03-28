// Implement a function that reverses a number without using loops.

#include<stdio.h>

int revNum(int n){
    int rev=0;
    int digits;
    while(n!=0){
        digits=n%10;
        rev=rev*10+digits;
        n/=10;
    }
    return rev;
}

int main(){
    int n;
    scanf("%d",&n);
    int result=revNum(n);
    printf("%d",result);
    return 0;
}