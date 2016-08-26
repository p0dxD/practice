#include <stdio.h>
void selection_sort(int *arr, int len);
void swap(int *arr, int a, int b);
void print_arr(int *arr, int len);


int main(int argc, char const *argv[]) {
  int arr[] = {4,1,3,2,5};

  printf("Before: ");
  print_arr(arr, 5);
  selection_sort(arr, 5);

  printf("After: ");
  print_arr(arr, 5);

  return 0;
}


void selection_sort(int *arr, int len){
  int index_min, i , j;

  for(i = 0; i < len-1; i++){
    index_min = i;
    // print_arr(arr, 5);
    for(j = 1 + i; j < len; j++){
      if(arr[index_min] > arr[j]){
        index_min = j;
      }
    }

    if(index_min != i){
      swap(arr, index_min , i);

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
