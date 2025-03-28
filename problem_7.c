// Implement a function that takes an array and returns the second largest element

#include<stdio.h>
#include<limits.h>

int secondLargest(int arr[],int n){
    int largest=INT_MIN;
    int secLargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secLargest=largest;
            largest=arr[i];
        }
    }
    return secLargest;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=secondLargest(arr,n);
    printf("%d\n",result);
    return 0;
}