#include<stdio.h>


int p1() {
  char c;
  int a=0;
  while((c=getchar())!=EOF) {
    a = a*10 + c - '0';
  }
  printf("%d\n",a);
}


int main() {
  p1();
  return 0;
}
