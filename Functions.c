#include <stdio.h>

int change(int a); // Function declaration
 
    int main(){
        int a1 = 55;
      change(a1);
        printf("The value inside a is %d", a1);

        return 0;
}
   int change(int a){  // Function body
        a = 87;
        return a;
    }
