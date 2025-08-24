#include <stdio.h>

int main() {

// array of integers

// SYNTAX: type-specifier identifier[size];

// array can store multiple values that are called elements
int a[10] = {4, 5, 2, 3, 1, 6643, 83, 3, 2, 1};
////////// 0 1 2 3 4 5 6 7 8 9

float b[5] = {4.5, 9.2, 10.0, 11.33, 0.12};

// if we initialize array directly then no need to define size
int c[] = {0, 2, 3, 4};

int d[4] = {[2] = 4, [3] = 2};

// array declaration
int e[3];

// assignment
e[0] = 0;
e[1] = 1;
e[2] = 2;

// initialize all elements of the array with 0 value
int f[6] = {0};

// int d[4] = {0, 0, 4, 2};

/* array subscripting - feature in programming language using which
we can access specific element of an array
*/

// let's print an element of array using subscripting
printf("array element: %d\n", f[1]);
}
