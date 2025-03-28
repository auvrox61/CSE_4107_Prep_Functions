//Write a function to count the number of set bits in a binary representation of a number.

#include<stdio.h>

int setBit(int n){
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n>>=1;
    }
    return count;
}

int main(){
    int n;
    scanf("%d",&n);
    int result=setBit(n);
    printf("%d\n",result);
    return 0;
}