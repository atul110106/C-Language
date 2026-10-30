#include <stdio.h>

int main()
{
    int i = 45;
    int *i1 = &i;
    int **i2 = &i1; // Pointer to a Pointer
// we can go even further to int*** and int****. But in real life we use int* or sometimes int**.
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *i1);
     printf("The value of i is %d\n", *(&i));
      printf("The value of i is %d\n", **(&i1));
   /*    ***&&&a = a you can remove a star from ampersand so ultimately this becomes
          only a because we have 3 star and 3 ampersand */
    return 0;
}