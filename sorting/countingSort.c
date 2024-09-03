#include<stdio.h>
int main(){
  int arr[] = {1,5,3,0,2,3,0,3};
  int max = 0;
  for (int i = 0;i<8;i++) {
      if (arr[i]>arr[max]) {
         max = arr[i];
      }
  }
  int countArray[max+1];
  for (int i = 0;i<8;i++) {
    printf("%d\n",countArray[i]);
  }
}
