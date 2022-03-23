//write a program to calculate factorials
#include <stdio.h>
int main () {
  int fact =0;
  int n ;
  printf("Enter number ");
  scanf("%d",&n);
  for(int i =1; i<=n;i++){
    fact=fact+i;
    
  }
  printf("%d",fact);

    }