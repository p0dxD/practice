#include <stdio.h>

void insertion_sort_two(int *arr, int len);
void swap(int *arr, int a, int b);
void print_arr(int *arr, int len);

int main(int argc, char *argv[]) {
  int arr[] = {4,1,3,2,5};

  printf("Before: ");
  print_arr(arr, 5);
  insertion_sort_two(arr, 5);

  printf("After: ");
  print_arr(arr, 5);


  return 0;
}


void insertion_sort_two(int *arr, int len){
  int i = 1, j;//starting position
  int current_value;
  int hole;

  for(;i < len; i++){
    current_value = arr[i];
    hole = i;
    for(j = i; j > 0 && current_value < arr[j-1]; j--){
      arr[j] = arr[j-1];
      hole--;
    }
    arr[hole] = current_value;
  }

}


void print_arr(int *arr, int len){
  int i = 0;
  for(; i < len ; i ++){
    printf("%d ", arr[i]);
  }

  printf("\n");
}
