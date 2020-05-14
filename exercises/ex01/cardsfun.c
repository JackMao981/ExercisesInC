/*
cards.c is a program from Head First C
Chapter 1, page 37

*/
#include <stdlib.h>
#include <stdio.h>
int checkcards(char card_name[]){
  int val = 0;
  switch (card_name[0]) {
    case 'K':
    case 'Q':
    case 'J':
      val = 10;
      break;
    case 'A':
      val = 11;
      break;
    case 'X':
      break;
    default:
      val = atoi(card_name);
      if((val < 1) || (val > 10)){
        puts("I don't understand that value!");
      }
  }
  return val;
}
int prompt(int c, char card_name[]){
  int count = c;
  puts("Enter the card_name: ");
  scanf("%2s", card_name);

  int val = 0;
  val = checkcards(card_name);
  if ((val > 2) && (val < 7)){
    count++;
  } else if (val == 10) {
    count--;
  }

  printf("Current count: %i\n", count);
  return count;
}
int main(){
  char card_name[3];
  int count = 0;
  while(card_name[0] != 'X'){
    count = prompt(count, card_name);
  }
  if (card_name[0] == 'X'){
    puts("X reached");
  }
  return 0;
}
