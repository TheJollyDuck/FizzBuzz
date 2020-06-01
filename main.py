# Shaun Recto
# FizzBuzz
# This program prints out numbers but for
# a specifc multiple of a number with a word

numList = [3,5,10,13]
wordlist = ["fizz","buzz","splonk","kaboom"]

print("========================")
print("FizzBuzz is starting....")
print("========================")

for i in range(0,1000):
    output = ""
    for j in range(0,len(numList)):
        if i%numList[j] == 0:
            output += wordlist[j]
    if output == "":
        print(i)
    else:
        print(output)

End = input("Press [Enter] to quit application...")