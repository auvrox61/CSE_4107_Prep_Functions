//Write a function to find the LCM and GCD of two numbers

#include<stdio.h>

int GCD(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int LCM(int a,int b){
    return (a*b)/GCD(a,b);
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int gcd=GCD(a,b);
    int lcm=LCM(a,b);
    printf("GCD : %d\n",gcd);
    printf("LCM : %d\n",lcm);
    return 0;
}