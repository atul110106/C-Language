#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Atul";
    char s1[56] = "Atul";
    char s2[56] = "bhai";

     printf("%d\n", strlen(st));

    char target[30];
    strcpy(target, st); // target now contains "Atul"
    printf("%s %s\n", st, target);

    strcat(s1, s2); // s1 now contains "Atul bhai"
    printf("%s %s\n", s1, s2);

    int a = strcmp("abc", "bca"); 
/* It compares two strings and returns 0 if both are equal. A negative value if the first
 string's mismatching character's ASCII value is less than the second string's corresponding
     mismatching character */ 

 int b = strcmp("bca", "1bc");// It checks on the basis of ASCII. so it will also check against 1
 printf("The diff is %d %d", a, b);

    return 0;
}