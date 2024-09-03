#include<stdio.h>
void insertionSort(int arr[], int n)
{
  for (int i = 0;i<n;i++) {
      int j = i;
      while (j>0 && arr[j-1]>arr[j]) {
          int temp = arr[j];
          arr[j] = arr[j -1];
          arr[j-1] = temp;
          j--; 
      }
  }
}
int main(){
    int a[] = {5,4,3,2,1};
    int length = 5;
    insertionSort(a,length);
    for (int i = 0;i<length;i++) {
       printf("%d ",a[i]);
    }
  return 0;
}
