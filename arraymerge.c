#include<stdio.h>

int main(){
    int a[10],b[10],c[30],n,m,i,j,l,temp;
    printf("Enter the size of  first array: ");
    scanf("%d",&n);
    printf("Enter the elements of first array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of  second array: ");
    scanf("%d",&m);
    printf("Enter the elements of second array:\n");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    l=m+n;
    // l is size of c[]
    for (i = 0; i < n; i++) {
        c[i] = a[i];
    }
    for(i=0;i<m;i++){
        c[i+n]=b[i];
    }
  
    printf("Merged array is \n");
    for (i = 0; i < l; i++) {
        printf("%d ", c[i]);
    }
    for(i=0;i<l-1;i++){
        for(j=0;j<l-1;j++){
            if (c[j]>c[j+1]){
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    printf("\nsorted array is ");
    for (i = 0; i < l; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}