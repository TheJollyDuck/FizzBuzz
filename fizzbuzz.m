%% TheJollyDuck
%%
%% FizzBuzz
%% MATLAB/Octave Implementation
%%
%% I hate MATLAB but here is my
%% implementation of FizzBuzz anyways
%% Uses counter method

clear; clc;

pairs = [                           % This holds the number and 
  3, "Fizz";                        % corresponding word to print
  5, "Buzz";
  6, "Breeze"
];

pairSize  = size(pairs);            % Finds the size of pair dimensions
pairRange = 1:pairSize;             % Generates a range for for loop
numLimit  = input("How many numbers do you want to go up to [int]: ");

for T = 1:numLimit                  % Iterates until user def limit
    counter = 0;                    % Keeps track of 
    
    for n = pairRange               % Iterates over the factors
        
      factor    = pairs(n, 1);      % Contains the number for checking
      remainder = mod(T, str2double(factor));   % Finds the remainder
      
      if (remainder == 0)           % Checks if number is multiple
          
        fprintf("%s", pairs(n, 2)); % If passes prints out phrase
        counter = counter +1;       % Increments counter
      end
    end
    
    if (counter == 0)               % Checks if number is not multiple
        fprintf("%d", T);           % If passes, prints out number
    end
    
    fprintf("\n");
end