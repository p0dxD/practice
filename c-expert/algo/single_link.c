#include <stdio.h>
#include <stdlib.h>
struct Node{
  struct Node *next;
  int value;
}*head;

int size = 0;

void add_list(struct Node *node){

  if(head == NULL){
    head = node;
  }else{
    //add it to the front of the list
    node->next = head;//set the pointer
    head = node;
  }
  size++;
  printf("%s\n", "Added a value to the list");
}

int search_value(struct Node *list, struct Node *value){
  if(list == NULL){
    return 0;
  }else if(list == value){
      return 1;
  }else{
    return search_value(list->next, value);
  }
}

struct Node *find_previous_helper(struct Node *head, struct Node *node){

  if(head == NULL){
    return NULL;
  }else if(head->next == node){
      return head;
  }else{
    return find_previous_helper(head->next, node);
  }
}


void remove_value(struct Node *node){
  if(node == NULL){
    return;
  }
  struct Node *prev;
  if(!search_value(head ,node)){
    printf("%s\n", "error");
    return;
  }
  if((prev = find_previous_helper(head, node))!= NULL){
    // printf("%s\n", "in here 1");
    prev->next = node->next;
  }else{//its the head does not a predecesor
    // printf("%s\n", "in here 2");
      head = head->next;
  }
  printf("%s\n", "Removed a value.");
  free(node);
}

void print_values(struct Node *node){
  if(node == NULL){
    return;
  }else{
    printf("Value found: %d\n", node->value);
    print_values(node->next);
  }
}
int main(int argc, char *argv[]) {
  //linked list testing
  struct Node *node_one = (struct Node *)malloc(sizeof(struct Node));

  node_one->value = 1;

  struct Node *node_two = (struct Node *)malloc(sizeof(struct Node));

  node_two->value = 2;


  struct Node *node_three = (struct Node *)malloc(sizeof(struct Node));

  node_three->value = 3;



  add_list(node_one);
  printf("First iteration: \n");
  print_values(head);

  add_list(node_two);
  add_list(node_three);
  printf("Second iteration:\n");
  print_values(head);

  printf("Found:  %s\n", (search_value(head, node_one)? "Found": "Not Found"));

  struct Node *node_four = (struct Node *)malloc(sizeof(struct Node));
  node_four->value = 4;
  //testing a value that is not there
  printf("Found:  %s\n", (search_value(head, node_four)? "Found": "Not Found"));

  remove_value(node_two);

  print_values(head);


  remove_value(node_two);

  print_values(head);

  remove_value(node_three);

  print_values(head);
  return 0;
}
