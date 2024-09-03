#include<stdio.h>
int main(){
  int a[] = {1,2,3,4,5,6,7,8,9};
  int target = 8;
  int len = 9;
  for (int i = 0;i<len-1;i++) {
    if (a[i]==target) {
      printf("element found on index :%d\n",i);
      break;
    }
  }
  return 0;
}
