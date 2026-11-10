
#include <stdio.h>

int main()
{
    char st[30];

    printf("Enter your name: ");
    fgets(st, sizeof(st), stdin);

    printf("\nUsing puts():\n");
    puts(st);// puts move the cursor to next line after printing. It's same like using \n in printf

    printf("\nUsing fputs():\n");
    fputs(st, stdout);

    printf("\n\nUsing printf():\n");
    printf("%s", st);

    return 0;
}

/* We should not use gets because it can cause buffer overflow problems. Instead we can use fgets.
 And it is deprecated from the C11 standard. */

