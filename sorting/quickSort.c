#include <stdio.h>

void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
int partition(int arr[],int left,int right){
  int i = left,j = right, pivot = arr[left];
  while(i < j) {
    while (arr[i]<=pivot) i++;
    while (arr[j]>pivot) j--;
    if (i<j) {
      swap(&arr[i],&arr[j]);
    }
  }
  swap(&arr[left],&arr[j]);
  return j;
}
void quickSort(int arr[],int left,int right){
  if (left<right) {
    int mid = partition(arr,left,right);
    quickSort(arr,left,mid-1);
    quickSort(arr,mid+1,right);
  }
}
int main() {
  int arr[] = {8, 20, -2, 4, -6};
  int length = sizeof(arr) / sizeof(arr[0]);

  quickSort(arr, 0, length - 1);

  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
