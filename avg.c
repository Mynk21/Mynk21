#include <stdio.h>
int main(){
int n, i ,sum=0;
  printf("Enetr number ");
  scanf("%d",&n);

  for (i=1 ; i<=n ; i++ ){

    sum = sum+i;
    
  }
 float avg = (float) sum/n;
  printf("Sum : %.2f",avg);
  


  
}