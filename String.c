#include <stdio.h>
int main() {
    char st[] = {'A','T','U','L','\0'};
    char name[5]; 
    printf("Enter your name\n");
    scanf("%s",name);// There is no need to manually enter null char "\0" with scanf.
    /*
    char st[] = {'A','T','U','L','\0'};
    char name = "Atul"; 
    Both are same 
    // When we are using double quotes, we don't have to mention '\0', it is already included.
    */
   for(int i=0; st[i] != '\0'; i++ ){
    printf("%c\n", st[i]);
   } // But we can directly print the string using th %s format specifier instead of using for loop
   
   printf("%s\n",st);
    return 0;
}