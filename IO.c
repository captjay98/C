#include <stdio.h>

int main(){

  char name[25];
  int age;

  printf("What's your name?\n");
  fgets(name, 25, stdin);
  // name[dtrlen(name)-1] = '\0';

  printf("My name is %s", name);

  printf("How old are you?\n");
  scanf("%d", &age);
  printf("I am %d years old.\n", age);
  
}mm123