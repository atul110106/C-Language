#include <stdio.h>
/*
Factorial(5) = 1*2*3*4*5
Factorial(4) = 1*2*3*4
Factorial(n) = Factorial(n-1)*n;
We can calculate Factorial using loops as well
*/

int factorial(int n){
if(n ==0 || n==1){
return 1; 
// This is base conditon or base case if we don't apply base condition it will run infinitely to - infinity
   }
return factorial(n-1)*n;
}

int main() {
    int a =5;
    printf("The value of Factorial of %d is %d", a, factorial(a));
    return 0;
}