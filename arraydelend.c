#include<stdio.h>

void main(){
    int a[50],i,size,pos,num;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the array element:\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements of array:\n");
        for(i=0;i<size;i++){
        printf("%d\n",a[i]);
    }
    num=5;
    a[size]=num;
    size--;
        printf("Elements of array:\n");
        for(i=0;i<size;i++){
        printf("%d\n",a[i]);}
}