#include<stdio.h>
void selectionSort(int arr[],int n){
  for (int i = 0;i < n ;i++) {
  int min = i;
    for (int j = i + 1;j < n;j++) {
       if (arr[j]<arr[min]) {
          min = j;
       }
    }
  int temp = arr[i];
  arr[i] = arr[min];
  arr[min] = temp;
  }
}
int main(){
    int a[] = {9,8,5,8,42,1,3,41,13,4,2}; 
    int length = 11;
    selectionSort(a,length);
    for (int i = 0;i<length;i++) {
       printf("%d ",a[i]);
    }
  return 0;
}
