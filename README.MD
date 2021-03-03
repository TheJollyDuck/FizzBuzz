# Fizz Buzz Programs

This repository contains my implementations of fizzbuzz using different programming languages I've used. This was an exercise (except those marked simplified) in trying to make them expansive and being able to add implementations with relative ease.

## Python

This one was done in python 3, and tried to make it simple to understand and nice to implement.

• Uses lists to contain the numbers and their word replacements.

• Uses a method of concatenation, which is easy to implement.

• Only code to modify is the lists that contain the words and associated number.

• Asks for user defined limit of what numbers to check

## C

This one took longer to develop, using the concatenation approach in the previous commit, but now it works much better than before using a counter method. Instead of concatenating the various phrases into one output, you count how many times a number is a multiple, and prints out the phrases one at time. There is a check in the end if the number is not a multiple, in which case, it prints out the number.

• Uses structs to have pairs of both the factor and the word to replace it.

• Uses the method of counters for the printout, replacing the previous method of concatenation, reducing the number of dependencies

• Also allows user input to limit the number of iterations

• This implementation requires 1 modification of the code to add more pairs. The left must be the phrase/word and the factor on the right.

    pattern req[] = {{"Fizz", 3}, {"Buzz", 5}, {"Jazz", 8}}; // Can add/remove pairs here

## C++

This method follows suit of Python in that it uses the concatenation method, which works due to the more simple string type, when compared to strings in C. The code isn't as elegant as the Python implementation, but it does the job.

• Also uses structs to have pairs of both the factor and the word to replace it.

• Uses a method of concatenation, which was easier to implement than in C.

• Also allows user input to limit the number of iterations

• See C for modifying the pairs. The approach is the same.

## MATLAB / Octave

This version was just to see if MATLAB was able to accomplish the task more or less on par with the others. You will need a MATLAB compiler for this (I have not tweaked it for dual compatability with both MATLAB and Octave; will happen soon), meaning you will need a license.

• Uses matrices as that's the main thing about MATLAB

• Somewhat resembles the C approach

• Also allows user input to limit the number of iterations

• Modifying pairs will need to be overhauled as current implementation does not work with Octave 6.1.0
