#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"



int main(){

  printf("\n$ ");
  char user_input[100];
  fgets(user_input, 100, stdin);
  printf("\n%s", "Count words Running: \n");

  printf("%d\n", count_words(user_input));

}
