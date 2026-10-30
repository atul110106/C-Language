// Arrays
/*
ways of declaration  ->  float cgpa[3] = {9, 8.6, 8.1};  ->  float cgpa[] = {9, 8.6, 8.1}; 
 int marks[5];  
*/


#include <stdio.h>

int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of student %d \n", (i + 1)); // The index of an array of size n goes from n to n-1
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The marks of student %d is %d \n", (i + 1), marks[i]);
    }

    float cgpa[]= {9, 8.6, 8.1}; 
    // We can even write it like this float cgpa[3] = {9, 8.6, 8.1} both are correct 

    for (int i = 0; i < 3; i++)
    {
        printf("The marks of student %d is %.2f \n", (i + 1), cgpa[i]);
    }
}
