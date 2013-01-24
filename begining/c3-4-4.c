#include<stdio.h>
#include<string.h>

/*Rujia Liu book Beginning Algorithms Contest 3.4.4 practice 1,2 page 47*/

int p1() {
  char c;
  int a=0;
  while((c=getchar())!=EOF) {
    a = a*10 + c - '0';
  }
  printf("%d\n",a);
  return 0;
}

int p2() {
  char c[1000];
  int a = 0;
  int i;
  fgets(c,sizeof(c),stdin);
  for (i=0;i<strlen(c);i++) {
    if(c[i]!=10) /* '\n' */
      a = a*10+c[i]-'0';
  }
  printf("%d\n",a);
  return 0;
}


int main() {
  p2();
  return 0;
}
