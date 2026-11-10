#include <stdio.h>
void PrintArray(int a[], int n){
for(int i =0; i<n; i++){
    printf("%d ",a[i]);
}
printf("\n");
}
 
void ReverseArray(int a[], int n){
    int temp;
    for(int i=0; i<n/2; i++){
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    PrintArray(arr,7);
    ReverseArray(arr,7);
    PrintArray(arr, 7);
    return 0;
}