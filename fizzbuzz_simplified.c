/*
 * TheJollyDuck
 *
 * Fizz Buzz Program
 * This is a program that generates
 * the patterns necessary for the game.
 * This is a very simplified version.
 */


#include <stdio.h>
#include <stdlib.h>

int main(void){
    int numberLimit;

    printf("Up to what number do you want to print out? [int]: ");
    scanf("%d", &numberLimit);

    for (int i = 0; i < numberLimit; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}

