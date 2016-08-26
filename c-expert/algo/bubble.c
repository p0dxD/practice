#include <stdio.h>

void bubble(int *arr, int len);
void swap(int *arr, int a, int b);
void print_arr(int *arr, int len);

int main(int argc, char *argv[]) {
  int arr[] = {4,1,3,2,5};

  printf("Before: ");
  print_arr(arr, 5);
  bubble(arr, 5);

  printf("After: ");
  print_arr(arr, 5);

  return 0;
}

void bubble(int *arr, int len){
  int i = 0, j = 0;
  for(i = 0; i < len; i++){
    for(j = i; j < len; j++){
      if(arr[j] < arr[i]){
        swap(arr,i, j);
      }
    }
  }

}

void swap(int *arr, int a, int b){
  int tmp = arr[b];
  arr[b] = arr[a];
  arr[a] = tmp;
}

void print_arr(int *arr, int len){
  int i = 0;
  for(; i < len ; i ++){
    printf("%d ", arr[i]);
  }

  printf("\n");
}
