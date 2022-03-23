// compute the root of a quadratic eqation ;
// ax^2+bx+c;
// a not equal to 0;
// dec=b^2-4ac;
// 1.if des=0;
// root will be eqaul
// 2.des>0
// (-b+desc)/-2a

// des<0;


#include<stdio.h>
#include<math.h>

int main(){

float a,b,c,d,r1,r2;
printf("enter numbers a,b,c:");
scanf("%f%f%f",&a ,&b ,&c);
if (a==0){
  printf("Value of a cant be 0\n");
  printf("no possible root\n");
  return 1 ;
}

else {
d=(b*b)-(4.0*a*c);
  }

if (d==0){
printf("eqation will have eqaul roots\n");
r2=r1=(-b)/(2.0*a);
printf("roots are r1=r2 %f\n",r1);
}


else if(d>0){

r1 = (-b + sqrt(d)) / (2.0 * a);
r2 = (-b - sqrt(d)) / (2.0 * a);
printf("eqation will have r1 :%f\n",r1);
printf("eqation will have r1 :%f\n",r2);
}


else{

float real = (-b )/ (2.0 * a);
float img = (sqrt(-d)) / (2.0 * a);

printf("r1 will be : %f + %fi\n" , real,img);
printf("r2 will be : %f - %fi\n" , real,img);
}}

return 0;
}
