#include<stdio.h>
int binarySearch(int a[],int target){
  int high,low,mid;
  high = 9;
  low = 0;
  while (low <= high) {
    mid = (low + high)/2;
    if (a[mid]==target) {
      return mid;
    }
    else if (a[mid]<target) {
      low = mid + 1;
    }
    else {
      high = mid - 1;
    }
  }
  return -1;
}

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int target = 1;
  /*int revBinarySearch(int a[],int target){*/
/*  int high,low,mid;*/
/*  low = 9;*/
/*  high = 0;*/
/*  while (low >= high) {*/
/*    mid = (low + high)/2;*/
/*    if (a[mid]==target) {*/
/*      return mid;*/
/*    }*/
/*    else if (a[mid]<target) {*/
/*      low = mid - 1;*/
/*    }*/
/*    else {*/
/*      high = mid + 1;*/
/*    }*/
/*  }*/
/*  return -1;*/
/*}*/
  printf("element found on %dth position \n", binarySearch(arr,target));;
  return 0;
}
