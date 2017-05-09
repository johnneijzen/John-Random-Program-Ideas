/*
The MIT License (MIT)

Copyright (c) 2015-2017 John Neijzen

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

/*
    @author:    John V. Neijzen
    @activity:  Final Project
    @section:   CS 22.1 B
    @version:   0.1
    @Change-logs:
        0.1 - First Draft
*/

#include <stdio.h>
#include <stdlib.h>
int currentLetter;
int lastValue = 0;

int lexer(char string) {
  switch (string) {
    case 'A':
      return 1;
    case 'B':
      return 1;
    case 'C':
      return 1;
    case '=':
      return 2;
    case '+':
      return 3;
    case '-':
      return 4;
    case '*':
      return 5;
    case '/':
      return 6;
    case '(':
      return 7;
    case ')':
      return 8;
    case '1':
      return 9;
    case '2':
      return 9;
    case '3':
      return 9;
    case '4':
      return 9;
    case '5':
      return 9;
    case '6':
      return 9;
    case '7':
      return 9;
    case '8':
      return 9;
    case '9':
      return 9;
    case '0':
      return 9;
    case ' ':
      return 10;
    default:
      return 11;
  }
}

void removeSpace(char string[]) {
  while (string[currentLetter] == ' ') {
    currentLetter++;
  }
}

// this code check if first part of grammar is correct like a = or b = or c =
int checkOne(char string[]) {
  if (lexer(string[0]) == 1) {
    if (lexer(string[1]) == 2) {
      currentLetter = 1;
      return 1;
    } else {
      if (lexer(string[1]) == 10) {
        if (lexer(string[2]) == 2) {
          currentLetter = 2;
          return 1;
        } else {
          return 0;
        }
      } else {
        return 0;
      }
    }
  } else {
    return 0;
  }
}

int checkTwo(char string[]) {
  while (string[currentLetter] != '\n') {
    currentLetter = currentLetter + 1;
    removeSpace(string);
    // After checkone if next is ID OR NUMBER
    if ((lexer(string[currentLetter]) == 1) ||
        (lexer(string[currentLetter]) == 9)) {
      lastValue = lexer(string[currentLetter]);
      currentLetter = currentLetter + 1;
      removeSpace(string);
      // This Check if next token is add, sub, mul, or div
      if ((lexer(string[currentLetter]) == 3) ||
          (lexer(string[currentLetter]) == 4) ||
          (lexer(string[currentLetter]) == 6) ||
          (lexer(string[currentLetter]) == 5) ||
          (string[currentLetter] == '\n')) {
      } else if (lastValue == 9) {  // This Checks After first is false to see if it is double digit
        if (lexer(string[currentLetter]) == 9) {
        } else {
          return 0;
        }
      } else if (string[currentLetter] == ')') {  // This check if it is right ) and check if next operator;
        lastValue = lexer(string[currentLetter]);
      } else {
        return 0;
      }
    } else if ((string[currentLetter] == ' ') ||
			   (string[currentLetter] == '\n')) { // this is end of code/string
      lastValue = 12;
      break;
    } else if (lastValue == 8) {  // this check if last value was this symbol )
      if ((lexer(string[currentLetter]) == 3) ||
          (lexer(string[currentLetter]) == 4) ||
          (lexer(string[currentLetter]) == 6) ||
          (lexer(string[currentLetter]) == 5) ||
          (string[currentLetter] == '\n')) {
      } else {
        return 0;
      }
    } else {
      if ((string[currentLetter] == ')') ||
          (string[currentLetter] == '(')) {  // Just check for () xD
      } else {
        return 0;
      }
    }
  }
  return 1;  // if no error it is true
}

int main() {
  int NumberOfLines = 0;
  int ctr = 0;
  int isCheckOne = 0;
  int isCheckTwo = 0;
  int isCheckThree = 0;

  FILE* fp;
  char filename[255];
  printf("Enter Filename Note add .txt to it: ");
  scanf("%s", &filename);

  fp = fopen(filename, "r");
  if (fp == NULL) {
    printf("file does not exists %s", filename);
    return 0;
  }

  const size_t line_size = 300;
  char* line = malloc(line_size);
  while (fgets(line, line_size, fp) != NULL) {
    if (NumberOfLines == 0) {
      NumberOfLines = atoi(line);
      NumberOfLines = NumberOfLines + 1;
    } else {
      isCheckOne = checkOne(line);
      if (isCheckOne == 0) {
        currentLetter = 0;
        printf("%s is false\n", line);
      } else {
        isCheckTwo = checkTwo(line);
        if (isCheckTwo == 0) {
          printf("%s is false\n", line);
        } else if (isCheckTwo = 1) {
          printf("%s is true\n", line);
        }
      }
    }
    
    ctr++;
    if (NumberOfLines == ctr) {
      break;
    }
  }
  free(line);  // dont forget to free heap memory
}
