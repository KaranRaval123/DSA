#include<stdio.h>
int recursiveBinarySearch(int a[],int target,int low,int high){
    int mid = (low+high)/2;
    if (low<=high) {
    if (a[mid]==target) {
      return mid;
    }
    else if (target>a[mid]) {
      return recursiveBinarySearch(a,target,mid+1,high);
    }
    else {
      return recursiveBinarySearch(a,target,low,mid-1);
    }
    }
    return -1;
  }


int main(){
  int arr[] = {1,2,3,4,5,6,7,10};
  int target = 6;
     printf("element found on %dth position \n", recursiveBinarySearch(arr,target,0,7));;
  return 0;
}

