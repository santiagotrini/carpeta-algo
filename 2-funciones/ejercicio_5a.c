#include <stdio.h>

int char_value(char c) {
  int result = c;
  return result;
}

int main(int argc, char *argv[]) {
  printf("valor de %c es %d\n", 'a', char_value('a'));
  printf("valor de %c es %d\n", 'z', char_value('z'));
  printf("valor de %c es %d\n", '6', char_value('6'));
  printf("valor de %c es %d\n", 'Z', char_value('Z'));
  return 0;
}
