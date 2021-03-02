/*
 * TheJollyDuck
 *
 * Fizz Buzz Program
 * This is a program that generates
 * the patterns necessary for the game
 * Fizz Buzz
 * Has some limitations regardin the output size,
 * without dynamic arrays.
 *
 * Originally had a custom function handling
 * concatenation but had problems with it,
 * and I also found <string.h>
 * Once I found it , it was smooth sailing.
 *
 */

#include <stdio.h>                                              // For i/o
#include <stdlib.h>                                             // Standard library
#include <string.h>                                             // for string functions

typedef struct pair {                                           // Struct for easy implementation of a word and it's number

    char word[20];
    int number;

} pattern;

const int ARRAY_SIZE = 20;                                      // Array size must be bigger than total pattern chars
void printOutput(char a[], int b);                              // To decide on whether to output number or pattern

int main(void){
    pattern req[] = {{"Fizz", 3}, {"Buzz", 5}, {"Jazz", 8}};    // Contains the word and associated number
    int numberLimit;

    printf("Up to what number do you want to print out? [int]: ");
    scanf("%d", &numberLimit);                                  // User input to see how much

    for (int i = 1; i < numberLimit; i++){                      // Iterates through each number up to user-defined limit
        char output[ARRAY_SIZE];
        output[0] = '\0';                                       // Declares and initializes an empty string for concatenation

        for (int j = 0; j < (sizeof(req)/sizeof(req[0])); j++) {// Iterates through each pattern to check for multiples
            if (i % req[j].number == 0) {
                strcat(output, req[j].word);                    // If it is a multiple, the name is concatenated to
            }
        }
        printOutput(output, i);                                 // Prints the coressponding output for the number
    }

    printf("Press [Enter] to end program");
    getchar();
    return 0;
}

/*
 * printOutput()
 * This function is to check whether we have
 * an integer or a string to output.
 *
 * This method forgoes any need for casting
 * and was easier to implement.
 *
 * Originally tried to do it the python way
 * but failed.
 *
 */

void printOutput(char a[], int b){                              // Params are the output array & the number
    if (a[0] == '\0') {
        printf("%d\n",b);                                       // If output string is empty, print number

    } else {
        printf("%s\n", a);                                      // Otherwise, print the output string

    }
}
