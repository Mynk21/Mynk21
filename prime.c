#include <stdio.h>
int main(){
  int n ; 
  int flag = 1;
  printf("Enter number ");

  scanf("%d",&n);
   for(int i = 2 ; i <= n/2 ; i++ ){
   
     if (n %i==0){
       flag = 0 ;
     }
   }
  
  if(flag == 0){
    printf("Not prime ");
  }
    else if(n==1){
      printf("not prime ");
    }
  else{
    printf("prime number ");
  }

  
}