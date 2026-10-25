#include <stdio.h>

int Fibonacci(int n){
    // 0 , 1, 1, 2, 3, 5, 8, 13, 21, 
if(n == 1|| n == 2){
    return n-1;
}
return Fibonacci(n-1) + Fibonacci(n-2);
}

int main() {
    int a =6;
    printf("The value of %dth element of Fibonacci sequence is %d", a, Fibonacci(a));
    return 0;
}

