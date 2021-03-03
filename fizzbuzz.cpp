/*
 * TheJollyDuck
 * 
 * FizzBuzz
 * C++ Implementation
 * 
 */


#include <iostream>
#include <cstring>


typedef struct pair {
    int number;
    std::string word;
} factor;

int main() {
  factor req[] = {{3, "Fizz"}, {5, "Buzz"}, {9, "Banana"}, {15, "Pepega"}};
  int numberLimit;

  std::cout << "Please type in how many numbers you want checked [int]: ";
  std::cin  >> numberLimit;

  for (int i = 1; i < numberLimit+1; i++) {
      std::string output = "";
      for (unsigned int j = 0; j < (sizeof(req)/sizeof(req[0])); j++) {
          if (i % req[j].number == 0) {
              output += req[j].word;
          }
      }
      if (output == "") {
        std::cout << i << std::endl;
      } else {
        std::cout << output << std::endl;
      }
  }

  return 0;
}