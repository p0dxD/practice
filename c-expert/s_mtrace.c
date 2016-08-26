#include <mcheck.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  #ifdef DEBUG//this will only run in this circumstance
    mtrace();
  #endif
  int j = 0;
  for (j = 0; j < 2; j++)
    malloc(100);            /* Never freed--a memory leak */

calloc(16, 16);             /* Never freed--a memory leak */
exit(EXIT_SUCCESS);

  return 0;
}
