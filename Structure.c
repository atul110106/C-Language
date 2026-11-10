#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    /* Character arrays inside structures must have a fixed size.
 char name[]; is invalid because the compiler does not know
 how much memory to allocate for each structure object.
*/
    char name[50]; // Correct:
};

int main()
{
    struct employee e1, e2, e3, e4;

    e1.code = 52386011;
    e1.salary = 54060.65;

    // Array assignment is not allowed:
    // e1.name = "Atul";   ❌

    // Use strcpy():
    strcpy(e1.name, "Aditya"); // ✅

    printf("Enter the value of code\n");
    scanf("%d", &e2.code);
    printf("Enter the value of salary\n");
    scanf("%f", &e2.salary);
    /*
    If a scanf() comes before fgets():
    then fgets() may immediately read the leftover newline (\n) from the previous
    input and appear to skip input.
    */
    getchar(); // consume leftover '\n'
    printf("Enter the value of name\n");
    fgets(e2.name, sizeof(e2.name), stdin);

/*
Note :- Many beginners think:
"fgets() reads until it finds \n, so it must discard it."
But that's not what happens.
That is the reason why it is printing a new line char after printing the value of e2.name.
*/

    printf("Enter the value of code\n");
    scanf("%d", &e3.code);
    printf("Enter the value of salary\n");
    scanf("%f", &e3.salary);
    printf("Enter the value of name\n");
    scanf("%s", &e3.name);

    printf("%d %.2f %s\n",
           e1.code,
           e1.salary,
           e1.name);

    printf("%d %.2f %s\n",
           e2.code,
           e2.salary,
           e2.name);

    printf("%d %.2f %s\n",
           e3.code,
           e3.salary,
           e3.name);

    return 0;
}