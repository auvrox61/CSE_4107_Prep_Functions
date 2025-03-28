#include<stdio.h>

double sqroot(double num,double precision){
    double low=0.0;
    double mid;
    double high=num;
    double store=0.0;
    if(num<0){
        return -1;
    }
    while((high-low)>precision){
        mid=(low+high)/2;
        if(mid*mid==num){
            return mid;
        } else if(mid*mid<num){
            low=mid;
            store=mid;
        } else if(num*num>mid){
            high=mid;
        }
    }
    return store;
}

int main(){
    double num;
    scanf("%lf",&num);
    double precision;
    scanf("%lf",&precision);
    double result=sqroot(num,precision);
    if(result!=-1){
        printf("The square root of %.0lf with %lf precision is %lf\n",num,precision,result);
    }
    return 0;
}