#include <stdio.h>
#include <time.h>

void print_message(void);
int wrong_comp();

int main(){
  time_t t;

  t = t|-1;
  t = t&0x0000000;
(void)printf("%s Hexadecimal %lX\n", ctime(&t), t);

// char *test = "test";

// const char * test2 = "asd";


// test = test2;

print_message();
printf("%d\n", wrong_comp());

//test
char buffer[120];
printf("%ld\n", sizeof(buffer));
}


void print_message(){
  printf("%s\n", "This is an example\n"
    "of how the string can be broken down");
}


int wrong_comp(){
  unsigned int num = 1;
  int num2 = -1;


  if(num2 < (int)num){
    return 0;
  }else{
    return 1;
  }
}
