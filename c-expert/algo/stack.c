#include <stdio.h>

#define MAX_STACK 10
int stack[MAX_STACK];
int loc = 0;

void push(int value){
  if(loc < MAX_STACK){
    stack[loc++] = value;
  }else{
    printf("Nothing more can fit.\n");
  }
}

int pop(){
  if(loc > 0){
    return stack[--loc];
  }else{
    return -1;
  }
}


int main(int argc, char  *argv[]) {

  //testing of the stack
  push(1);
  push(2);
  push(3);
  push(4);


  printf("%d\n", loc);
  pop();
  pop();
  pop();
  pop();
  pop();
  pop();
  pop();
  pop();
  pop();

  return 0;
}
