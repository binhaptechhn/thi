#include<stdio.h>

int songuyen(int arr[], int s);

int main()
{
    int arr[10];
    int i;

    printf("Input number: \n");
    for(i=1;i<=10;i++){
        printf("Number %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nReverse order is:\n");
    sothuc(arr,10);
}
int sothuc(int arr[], int s){
    int i;
    for(i=s;i>0;i--){
        printf("Number %d\n",arr[i]);
    }
}
