#include <stdio.h>
int main(){
  int n ; 
  printf("ennter a number ");
  scanf("%d",&n);
  int mult;
  for(int i = 1 ; i<=10 ;i++){
    mult = n *i;

    printf("%d x %d  = %d \n",n , i , mult );
  }
  

  
}