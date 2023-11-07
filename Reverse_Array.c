#include<stdio.h>

int main(){
    int n,temp;
    printf("Enter the no. of elements:");
    scanf("%d",&n); //getting no of element
    int arr[n];
    printf("Enter the elements of array:\n");
    //inputing array elements
    for (int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    //Reversing elements
    for (int i=0; i<(n/2); i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("The reversed array:\n");
    for (int i=0; i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
