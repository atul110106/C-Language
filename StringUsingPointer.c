#include <stdio.h>

int main()
{
    char *ptr = "Atul";
    char name[] = "Atul";
    printf("%s\n", ptr);
    printf("%s\n", name);
    ptr = "Rohit"; // A string defined using pointer can be reinitialized.
  //  name = "Rohit"; once a string is defined you can not reinitialize it.
    printf("%s\n", ptr);
    printf("%s\n", name);
    return 0;
}