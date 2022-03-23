#include<stdio.h>
int main(){
  int income;
  printf("Enter income of employee");
  scanf("%d",&income);

  float tax =0;
  if(income>250000 && income <500000)
    tax = 0.5*income ;

  else if (income >=500000 && income<1000000)
    tax = 0.20*income;

  else if (income >=1000000)
    tax = 0.30*income ;

  float net = income - tax;
  printf("Salary of employee : %d\n",income);
  printf("tax paid by the employee will be :%f\n",tax);
  printf("net income will be : %f",net);

  
}