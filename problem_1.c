//Write a function to check whether a given number is prime

#include<stdio.h>

int isPrime(int n){
    if(n<2){
        return 0;
    } else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return 0;
            } else{
                return 1;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    if(isPrime(n)){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
    return 0;
}