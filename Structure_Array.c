#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[50];
};

int main()
{
    struct employee e[3];
    // facebook[0].code = 100;
    // facebook[1].code = 101;

    struct employee atul = {100, 120000000.00, "Atul"};
    printf("%d %.2f %s\n", atul.code, atul.salary, atul.name);

    for (int i = 0; i < 3; i++)
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
    }

    for (int i = 0; i < sizeof(e); i++)
    {
        printf("%d %.2f %s\n",
               e[i].code,
               e[i].salary,
               e[i].name);
    }

    return 0;
}