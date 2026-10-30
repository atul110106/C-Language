#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int *p1 = &arr[0];  // points to 10
    int *p2 = &arr[3];  // points to 40

    // 1. Addition of a number to a pointer
    printf("Initial value pointed by p1 = %d\n", *p1);

    p1 = p1 + 2;

    printf("After p1 + 2 = %d\n\n", *p1);

    // 2. Subtraction of a number from a pointer
    p1 = p1 - 1;

    printf("After p1 - 1 = %d\n\n", *p1);

    // 3. Subtraction of one pointer from another
    printf("p2 - p1 = %d\n\n", p2 - p1);

    // 4. Comparison of two pointers
    if (p2 > p1)
    {
        printf("p2 is ahead of p1 in the array\n");
    }
    else if (p2 < p1)
    {
        printf("p2 is behind p1 in the array\n");
    }
    else
    {
        printf("Both pointers are equal\n");
    }

    return 0;
}
