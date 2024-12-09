#include<stdio.h>
#include<stdio.h>


int search(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,3,5,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]); //sizeof arr = 6*4 byte = 24 -->24/4 =6 
    int size=sizeof(arr)/sizeof(arr[0]);   
    int key=7;
    int result = search(arr,size,key);
    if(result != -1){
        printf("Element is present at index %d\n",result);
    }
    else{
        printf("Element is not present in array\n");
    }
    return 0;
}
