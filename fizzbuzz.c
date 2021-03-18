/*
 * TheJollyDuck
 *
 * Fizz Buzz Program
 * This is a program that generates
 * the patterns necessary for the game
 *
 * This uses a counter method, rather than
 * a concatenation method due to its limitations
 * seen in previous commits.
 */

#include <stdio.h>                                              // For i/o
#include <stdlib.h>                                             // Standard library
#include <string.h>                                             // for string functions

#define WORD_LENGTH 20                                          // Limits the length of output word

typedef struct pair {                                           // Struct for easy implementation of a word and it's number

    char word[WORD_LENGTH];
    int number;

} pattern;

int main(void){
    pattern req[] = {{"Fizz", 3}, {"Buzz", 5}, {"Jazz", 8}};    // Contains the word and associated number
    int numberLimit;

    printf("Up to what number do you want to print out? [int]: ");
    scanf("%d", &numberLimit);                                  // User input to see how much

    for (int i = 1; i < numberLimit+1; i++){                    // Iterates through each number up to user-defined limit
        int counter = 0;                                        // Counts how many times a number is a multiple

        for (int j = 0; j < (sizeof(req)/sizeof(req[0])); j++) {// Iterates through each pattern to check for multiples
            if (i % req[j].number == 0) {                       // Checks if number is a multiple
                printf("%s", req[j].word);                      // If passes, prints out corresponding phrase
                counter++;                                      // Increments counter
            }
        }
        if (counter == 0) {                                     // Checks if number is not a multiple of any req[].number
            printf("%d", i);                                    // If passes, prints out number
        }
        printf("\n");
    }

    printf("Press [Enter] to end program");
    getchar();
    return 0;
}