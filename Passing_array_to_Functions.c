#include <stdio.h>

void printArray(int *ptr, int size)
// we can even do like this void printArray(int arr[], int size) 2 ways of passing array to function
{
    int i;
    
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    printArray(arr, 5);
    return 0;
}