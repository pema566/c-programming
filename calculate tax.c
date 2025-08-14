#include <stdio.h>
//int is the return type of main function
int main() {
// variables - data type which can store data in the memory
    int amount;
printf("Enter amount");
scanf("%d", &amount) //& means address of the variable
float tax = 30/100 * amount + amount; //assignment "="
printf("amount with addes tax: %f", tax);
}