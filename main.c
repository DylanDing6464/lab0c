#include <stdio.h>
#include <readline/readline.h>

int main(void) {
  char *name = readline("Enter your name: ");
  printf("Hello, %s!\n");
  return 0;
}