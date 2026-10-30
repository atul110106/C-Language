#include <stdio.h>
/* Pointer Arithmetic increments the number of bytes in the given pointer depending upon
its data type and the number of bytes it takes in that specific Architecutre 
For example int in a architecture where it takes 2 bytes it will add 2 but in our case 
int takes 4 bytes so it will add 4.
Similarly for char it will add 1 because it takes 1 bytes.
*/

int main()
{
    // Pointer Arithmetic using Integer pointer
    int a = 45;
    int *ptr = &a;
    printf("The address of a is %u %u\n", &a, ptr);
    ptr++;
    printf("The address of a is %u\n", ptr);

    /* return 0; because this control never reaches to Char pointer and it never gets executed
    The main function immediately ends and the control returns to the operating system */

    // Pointer Arithmetic using Char pointer
    char b = 'B';
    char *c_ptr = &b;
    printf("The address of b is %u %u\n", &b, c_ptr);
    c_ptr++;
    printf("The address of b is %u", c_ptr);
    return 0;
}