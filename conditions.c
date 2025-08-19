/*
algorithm - steps to solve a problem
ask for user inputs
  -first_num
  - second_num
  - operation
if no valid operation then throw error
if operation == 1 => peerform addition of first_num and second-num
if operation == 2 => peerform subtraction of first_num and second-num 
if operation == 3 => peerform mul of first_num and second-num
if operation == 4 => peerform div of first_num and second-num
*/
#include <stdio.h>
//int is the return type of main function 
int main () {
    //variables declare
    int first_num; 
    int seconnd_num;
    int operation;
    printf("enter first num:")
    scanf("%d, &first_num");
    printf("enter second num");
    scanf("%d, &second_num");
    printf("entr operation num");
    scanf("%d, &operation");

    //and-> all condition should be true
    //or ->at least one condition should be true
    if  (operation != 1 && operatiom != 2 && operation != 3 && operation != 4) {
        printf("invalid operation!");
        return 0;
    }
    // ln -> new line [escape sequence]
    // lt -> tab
        if (operation == 1 ){
            printf("Result of addition: %d\n", first_num + second_num);
        }

        if (operation == 2){
            printf("Result of sub: %d\n", first_num + second_num);
        }
        if (operation == 3 ){
            printf("Result of mul: %d\n", first_num + second_num);
        }
         if (operation == 4 ){
            //%d is conversion specifier for integer
            //integer division -> floating point division
            //type conversion -> from integer division to floating point division
            printf("Result of div: %f\n", first_num / second_num);
        }

    }


  
} 