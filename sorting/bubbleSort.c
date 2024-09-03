#include<stdio.h>
void bubbleSort(int a[],int len){
  for (int i = 0;i<len;i++) {
    for (int j = 0;j<len-i-1;j++) {
      if (a[j]>a[j+1]) {
        int temp = a[j];
        a[j]=a[j+1]; 
        a[j+1]=temp;
      }
    }
  }
}
int main(){
  int array[] = {1,2,62,6,2,234,35,76,853,36,85};
  int length = 11;
  bubbleSort(array,length);
  for (int i = 0;i<length;i++) {
    printf("%d ",array[i]);
  }
}
