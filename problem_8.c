//Write a function to check if a given number is a palindrome.

#include<stdio.h>

int isPalindrome(int n){
    int rev=0;
    int ogNum=n;
    int digits;
    while(n!=0){
        digits=n%10;
        rev=rev*10+digits;
        n/=10;
    }
    if(rev==ogNum){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    if(isPalindrome(n)){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
    return 0;
}