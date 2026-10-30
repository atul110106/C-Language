#include <stdio.h>

int main() {
    int marks[] = {45, 78, 65, 98};
    int* ptr = marks; // int* ptr = &marks[0]; both are same

    for(int i =0; i<4; i++){
        printf("The marks at index at %d is %d\n", i , marks[i]);
        printf("The marks at index at %d is %d\n", i , *ptr);
        ptr++;

    }

    return 0;

}