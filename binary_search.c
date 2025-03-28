#include<stdio.h>

int binarySearch(int arr[],int size,int target){
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(arr[mid]==target){
            return mid;
        } else if(arr[mid]<target){
            low=mid+1;
        } else if(arr[mid]>target){
            high=mid-1;
        }
    }
}

int main(){
    int size;
    int target;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    printf("\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int result=binarySearch(arr,size,target);
    printf("The target element is %d which is at index %d\n",target,result);
    return 0;
}