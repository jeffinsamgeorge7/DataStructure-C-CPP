#include<stdio.h>

void main(){
    int a[50],i,n,pos,num;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array element:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements of array:\n");
        for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    num=55;
    a[n]=num;
    n++;
    printf("Elements of array:\n");
        for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}