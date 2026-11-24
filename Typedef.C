#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    float salary;
    char name[10];
}Emp;

typedef struct employee Emp; // We can even use typedef to declare like this.

int main() {

  
  Emp e1; // struct employee e1;
  Emp* ptr = &e1;
  e1.code = 123;
  e1.salary = 5000000.00;
  strcpy(e1.name, "Atul");
  printf("%d %s %.2f\n", e1.code, e1.name, e1.salary); 
  printf("%d %s %.2f\n", ptr->code, ptr->name, ptr->salary); 

    return 0;
}

/*
/*
typedef creates an alias (alternative name) for a data type.

typedef struct employee Emp;

Emp e1;            // same as struct employee e1;
Emp *ptr = &e1;    // same as struct employee *ptr = &e1;

Use '.' with structure variables.
Use '->' with structure pointers.

ptr->member is a shortcut for (*ptr).member.
*/
*/