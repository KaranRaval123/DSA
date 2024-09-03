#include<stdio.h>
void callbyval(int a, int b){
  int temp = b;
  b = a;
  a = temp;
  printf("Call by Value :\n");
  printf("%d\n",a);
  printf("%d\n",b);
}
void callbyref(int *a, int *b){
  int temp = *b;
  *b = *a;
  *a = temp;
}
int main(){
  int **ipp;
  int *ip1 = &i, *ip2 = &j;
  ipp = &ip1;
  /**ipp = ip2;*/
  /**ipp = &k;*/
  printf("%p\n",*ip1);
  return 0;
}

