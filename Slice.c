// Use this verison when we wants to include n

#include <stdio.h>
 char* slice(char str[], int m, int n){
      char *ptr1 = &str[m];
    //  char *ptr2 = &str[n];

      str = ptr1;
      str[n] = '\0';
      return str;
    }

int main() {
   char str[] = "Rohit Sharma";
   printf("%s\n", slice(str, 1, 4));
   return 0;
    return 0;
}

// Use this verison when we wants to exclude n


// #include <stdio.h>
// char* slice(char str[], int m, int n)
// {
//     str = str + m;
//     str[n - m] = '\0';
//     return str;
// }
// int main() {
//    char str[] ="Rohit Sharma";
//    printf("%s\n", slice(str, 1, 5));
//     return 0;
// }
