## TheJollyDuck
## FizzBuzz
## This program prints out numbers but for
## a specifc multiple of a number with a word

numList = [3,5,10,13]
wordlist = ["fizz","buzz","fizzle","kaboom"]

print("FizzBuzz is starting....")

# TO DO : Implement input safety so that it only accepts ints
numberLimit = int(input("Up to what number do you want to print out? [int]: "))

for i in range(0, numberLimit):         # This for loop iterates until the user-defined limit is reached
    output = ""                         # contains the final string for output
    for j in range(0,len(numList)):     # iterates all those through a list
        if i%numList[j] == 0:           # Checks if number is a multiple of defined number
            output += wordlist[j]       # If passes, concatenates the string
    if output == "":                    # Checks if output is empty
        print(i)                        # If passes, prints out number
    else:
        print(output)                   # Otherwise, print out string

End = input("Press [Enter] to quit application....")