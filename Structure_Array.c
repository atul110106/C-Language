#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[50];
};

int main()
{
    struct employee e[3];

    e[0].code = 52386011;
    e[0].salary = 54060.65;
    strcpy(e[0].name, "Aditya");

    struct employee atul = {100, 120000000.00, "Atul"};
    printf("%d %.2f %s\n", atul.code, atul.salary, atul.name);

    int len = sizeof(e) / sizeof(e[0]);
    for (int i = 1; i < len; i++)
    {
        printf("Enter the value of code for e%d\n", i);
        scanf("%d", &e[i].code);
        printf("Enter the value of salary\n");
        scanf("%f", &e[i].salary);
        /*
        If a scanf() comes before fgets():
        then fgets() may immediately read the leftover newline (\n) from the previous
        input and appear to skip input.
        */
        getchar(); // consume leftover '\n'
        printf("Enter the value of name\n");
        fgets(e[i].name, sizeof(e[i].name), stdin);
        e[i].name[strcspn(e[i].name, "\n")] = '\0';
        /* Finds the trailing newline character '\n' added by fgets() and
        replaces it with a null terminator '\0' to safely clean the string.*/
    }

    /*
 Wrong: for (int i = 0; i < sizeof(e); i++)
 sizeof(e) returns the total size of the entire array in bytes,
 not the number of elements.

 struct employee e[3];

 sizeof(struct employee) = 60 bytes (on my system)
 sizeof(e) = 60 * 3 = 180 bytes

 Therefore:

 for (int i = 0; i < sizeof(e); i++)

 becomes:

 for (int i = 0; i < 180; i++)

 which accesses e[3], e[4], e[5] ... outside the array bounds,
 causing undefined behavior (garbage values, crashes, etc.).

 Correct : for (int i = 0; i < sizeof(e) / sizeof(e[0]); i++)
 */
    for (int i = 0; i < len; i++)
    {
        printf("%d %.2f %s\n",
               e[i].code,
               e[i].salary,
               e[i].name);
    }
    return 0;
}
