#include <stdio.h>
#include <math.h>
int main(){
  int a , b , c;
  printf("Enter coeff of numbers ");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  float r1, d ,r2  ;
if (a==0){
  printf("Roots cant be calculated ");
  return 0;
}
  else{
    d = b*b-4*a*c;
    
  }

  if(d== 0){
    r1=r2= -b/(2.0*a);
    printf("r1 : %f   , r2 : %f \n",r1,r2);
  }
  else if(d>0){
    r1= (-b + sqrt(d))/(2.0*a);
    r1= (-b - sqrt(d))/(2.0*a);
    printf("r1 : %f   , r2 : %f \n",r1,r2);
    
  }
  else {
  float real  = -b/(2.0*a);
  float img = (sqrt(-d))/(2.0*a);
  
    printf("r1 : %f + i%f   , r2 : %f +i%f \n",real , img, real, img );
  }
  
}