/*
Adder.c

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100 //max allowed digits
#define MAX_N 1000 //max allowed inputs

int main() {
  int counter = 0;
  char str[MAX];
  int num[MAX_N] = {};
  int sum = 0;

  printf("ENTER A NUMBER: \n");
  // Prompts User Input.
  while(scanf("%s", &str)==1){

    // checks if the number exceeds the max allowed digits
    if (strlen(&str) >= MAX){
      printf("Input is too long!\n");
      printf("ENTER A NUMBER: \n");
      continue;
    }
    // checks if the number exceeds the max allowed inputs
    if (counter >= MAX_N){
      printf("Too many inputs!\n");
      break;
    }
    // checks if input can be converted to int
    if (isNumber(&str) == 1){
      num[counter] = atoi(&str);
      sum += num[counter];
      counter++;
    } else {
      printf("Input is not a number!!!\n");
    }
    printf("ENTER A NUMBER: \n");


  }
  printf("The sum is: %d.", sum);
  return 0;
}

// checkts if string can be parsed into a number
int isNumber(char *input) {

  int length = strlen (input);
  for (int i=0;i<length; i++)
    if (!isdigit(input[i]))
    {
        return 0;
    }
    return 1;
}
