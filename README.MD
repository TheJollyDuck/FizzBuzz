# Fizz Buzz Programs

This repository contains my implementations of fizzbuzz using different programming languages I've used. This was an exercise (except those marked simplified) in trying to make them expansive and being able to add implementations with relative ease.

## Python

This one was done in python 3, and tried to make it simple to understand and nice to implement.

• Uses lists to contain the numbers and their word replacements.

• Uses a method of concatenation, which is easy to implement.

• Only code to modify is the lists that contain the words and associated number.

• Asks for user defined limit of what numbers to check

## C

This one was a lot harder to implement as the properties of strings are much different compared to Python, and in my method, needs a lot more code to implement, using more or less the same approach as Python.

• Uses structs to have pairs of both the factor and the word to replace it.

• Also uses the method of concatenation for the printout, but uses a lot more code to iterate through the arrays

• Also allows user input

• This implementation requires 2 parts of the code to add more pairs. Remember to change these accordingly (or have `ARRAY_SIZE` a very big integer)

    const int ARRAY_SIZE = 20; // Array size must be bigger than total pattern chars
    ...
    ...
    pattern req[] = {{"Fizz", 3}, {"Buzz", 5}, {"Jazz", 8}}; // Can add/remove pairs here
