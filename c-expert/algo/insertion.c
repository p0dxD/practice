#include <stdio.h>
void insertion_sort(int *arr, int len);
// void swap(int *arr, int a, int b);
void print_arr(int *arr, int len);

int main(int argc, char *argv[]) {
  int arr[] = {4,1,3,2,5};

  printf("Before: ");
  print_arr(arr, 5);
  insertion_sort(arr, 5);

  printf("After: ");
  print_arr(arr, 5);

  return 0;
}


void insertion_sort(int *arr, int len){
  int hole_position;
  int value_to_insert;
  int i;
  for(i = 1; i < len; i++){
    value_to_insert = arr[i];
    hole_position = i;

    while(hole_position > 0 && arr[hole_position-1] > value_to_insert){
      arr[hole_position] = arr[hole_position-1];
      hole_position = hole_position -1;
    }

    arr[hole_position] = value_to_insert;
  }
}

void print_arr(int *arr, int len){
  int i = 0;
  for(; i < len ; i ++){
    printf("%d ", arr[i]);
  }

  printf("\n");
}

//
// procedure insertionSort( A : array of items )
//    int holePosition
//    int valueToInsert
//
//    for i = 1 to length(A) inclusive do:
//
//       /* select value to be inserted */
//       valueToInsert = A[i]
//       holePosition = i
//
//       /*locate hole position for the element to be inserted */
//
//       while holePosition > 0 and A[holePosition-1] > valueToInsert do:
//          A[holePosition] = A[holePosition-1]
//          holePosition = holePosition -1
//       end while
//
//       /* insert the number at hole position */
//       A[holePosition] = valueToInsert
//
//    end for
//
// end procedure
