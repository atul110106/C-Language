#include <stdio.h>

int main() {

    int i = 72; 
    int* i1 = &i; // j is an pointer pointing to i. And it is also an integer pointer.
    
    char a = 'A';
    char* a1 = &a; // a1 is an pointer pointing to a (a1 is an character pointer).
    float k = 4.5;
    float* k1 = &k; // k1 is an pointer pointing to k (k1 is an float pointer).

    printf("The address of i is %p\n", &i);
    printf("The address of i is %u\n", i1);
    printf("The value at address i1 is %u\n", *(&i1));
    printf("The value at address i1 is %u\n", *(i1));

    return 0;

}