#include <stdio.h>
void swap(int* a, int* b){
int temp;
temp = *a;
*a = *b;
*b = temp;

}
int main() {
    int a = 5, b=4;
    swap(&a, &b);
    printf("The value of a and b is %d , %d", a, b);
    return 0;
}