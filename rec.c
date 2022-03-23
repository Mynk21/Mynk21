#include<stdio.h>
int c=0 ;
int f()
{
  printf("%d",c);
  if (c == 8 ){
    return 0 ; 
  }
  c++;

  f();

  
}


int main(){
   f();
}
 // stack over flow:  it will stop at a certain point ;
