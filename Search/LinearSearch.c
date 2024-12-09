#include<stdio.h>
#include<stdlib.h>

int search(int arr[],int size, int key){
      for(int i=0;i<size;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,5,7,9,10,3};
    int size=sizeof(arr)/sizeof(arr[0]); //sizeof arr = 6*4 byte = 24 -->24/4 =6 
    int key=7;

    int result= search(arr,size,key);
    if(result != -1){
        printf("Element is present at index %d\n",result);
    }
    else{
        printf("Element is not present in array\n");
    }
    return 0;
}
