#include <stdio.h>
int main(){
// int a = 4;
// printf("%d %d %d", a, ++a, a++);

int i = 1;
printf("%d %d %d", ++i, i, i++);

return 0;
}
/*
Expected output 4 5 5
Actual output 6 6 4

Since a is modified more than once between sequence points, the program has undefined behavior.

changing the value of the same variable multiple times within a single expression(without a 
single expression (without a sequence point like ; or && between) means the compiler is not bound 
by any rules.)
So:

✅ 6 6 4 is possible

✅ 4 5 5 is possible

✅ 5 6 4 is possible

✅ Anything else is possible

The C standard does not define what should happen.
All the answers are correct but it depends on the compiler's evaluation order.
*/