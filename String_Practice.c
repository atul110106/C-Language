#include <stdio.h>

int main()
{
    char str[5];

    for(int i = 0; i < 4; i++)
    {
        /*
         * Problem:
         * scanf("%c") reads every character from the input buffer,
         * including whitespace characters such as:
         *
         *   ' '  (space)
         *   '\t' (tab)
         *   '\n' (newline generated when Enter is pressed)
         *
         * Example 1:
         * Input: ATUL<Enter>
         *
         * Stored:
         * str[0] = 'A'
         * str[1] = 'T'
         * str[2] = 'U'
         * str[3] = 'L'
         * str[4] = '\n'
         *
         * Example 2:
         * Input:
         * A<Enter>
         * T<Enter>
         * U<Enter>
         *
         * Stored:
         * str[0] = 'A'
         * str[1] = '\n'
         * str[2] = 'T'
         * str[3] = '\n'
         * str[4] = 'U'
         *
         * Because scanf("%c") treats Enter as a normal character.
         *
         * Many beginners try:
         *
         *     fflush(stdin);
         *
         * Why it should NOT be used:
         *
         * - fflush() is defined by the C standard only for output streams.
         * - fflush(stdin) causes undefined behavior in standard C.
         * - It may work on some compilers and fail on others.
         * - Portable C programs should avoid it.
         *
         * Recommended Solution:
         *
         * Use a leading space before %c:
         *
         *     scanf(" %c", &str[i]);
         *
         * The leading space tells scanf to skip all whitespace
         * characters (space, tab, newline) before reading input.
         */

        scanf(" %c", &str[i]);   // Preferred approach
    }

    str[4] = '\0';

    printf("String = %s\n", str);

    return 0;
}

