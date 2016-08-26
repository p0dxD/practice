//this shows a good example of a union
#include <stdio.h>

union bits32_tag{
  int whole;
  struct {char c1, c2, c3, c4;}byte;
}value;

#define peach int;

int main(int argc, char *argv[]) {

  //testing union by parts
  value.whole = 8421568;
  printf("Whole: %d Part1: %d Part2: %d Part3: %d\n", value.whole, value.byte.c1, value.byte.c2, value.byte.c4);

  return 0;
}
