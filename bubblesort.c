#include<stdio.h>
void main(){
    int n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in array:\n");
    for(int i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>a[j+1]){
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted array is:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("checking whether the git is working or not.");
}