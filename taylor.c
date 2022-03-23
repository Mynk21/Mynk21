#include <stdio.h>
#include <math.h>
#define PI 3.142
int main(){
  int degree, i ;
  float x, sum=0 , den, num, term;
  printf( "Entee degree : ");
  scanf("%d",&degree);
  printf("\n");
  
  x= degree*(PI/180);
  num=x;
  den=1.0;
  i=1; 
  do{
    term = num/den;
    sum = sum+term;
    num= -num*x*x;
    i=i+2;
    den = den*i*(i-1);
    }while(fabs(term)>=0.00001);

    printf("The sine function of sin(%d) is: %.3f\n",degree,sin(x));
    printf("The user defined sine function of sin(%d) is: %.3f\n",degree,sum);


  


  
}