#include <stdio.h>

int* sum(int a, int b)
{
    int s = a + b;
    int *ptr = &s;

    printf("The sum is %d\n", s);
    return ptr;
   //  return &s;
}

float* average(int a, int b)
{
    float avg = (a + b) / 2.0;
    float *ptr = &avg;

    printf("The average is %f\n", avg);
    return ptr;
 //   return &avg;
}

int main()
{
    int *sumPtr = sum(4, 6);
    float *avgPtr = average(4, 6);

    printf("The address of sum is %u and of average is %u\n",
           sumPtr, avgPtr);

    return 0;
}

/*
 * WARNING:
 * 's' is a local (stack) variable. Its lifetime ends when the function
 * returns. Returning '&s' (or a pointer variable that stores '&s')
 * creates a DANGLING POINTER.
 *
 * What is a dangling pointer?
 * ---------------------------
 * A dangling pointer is a pointer that points to memory that is no
 * longer valid or no longer belongs to the program object it originally
 * pointed to.
 *
 * Example:
 *     int s = 10;
 *     return &s;
 *
 * After the function returns, 's' is destroyed, but the returned pointer
 * still contains the old address. The pointer exists, but the object
 * it points to no longer exists.
 *
 * These are effectively the same:
 *
 *     return &s;
 *
 * and
 *
 *     int *ptr = &s;
 *     return ptr;
 *
 * Both return the address of a dead local variable.
 *
 * Why does it sometimes appear to work?
 * -------------------------------------
 * Because stack memory is not immediately erased when a function returns.
 * The old value may still be present at that address until the stack is
 * reused by another function call.
 *
 * Example:
 *     int *p = sum();
 *     printf("%d", *p);
 *
 * It may print the expected value, garbage data, 0, or even crash.
 * This is called UNDEFINED BEHAVIOR.
 *
 * What is the purpose of a dangling pointer?
 * ------------------------------------------
 * There is NO valid purpose for intentionally using a dangling pointer.
 * It is considered a bug. Programmers try to avoid creating dangling
 * pointers because they can lead to crashes, corrupted data, security
 * vulnerabilities, and unpredictable program behavior.
 *
 * Correct alternatives:
 *   1. Return the value directly.
 *   2. Use dynamic memory (malloc).
 *   3. Pass a pointer parameter and store the result there.
 */
