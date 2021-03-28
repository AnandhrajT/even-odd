#include<stdio.h>
int main()
{
  int n;
  char arr[2][5]={"even","odd"};
  scanf("%d",&n);
  printf("%s\n",arr[n%2]);
}
