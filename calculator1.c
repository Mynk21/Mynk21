#include<stdio.h>
int main(){
  char opt;
  int res ;
  printf("Enter option \n ");
  scanf("%c",&opt);

  int num1,num2;

  printf("Enter two numbers \n");
  scanf("%d%d",&num1,&num2);


  if (opt =='+'){
    res=num1+num2;
    printf("Sum is : %d\n",res);
    }
  else if(opt =='-'){
    res = num1-num2 ; 
    printf("Sub is : %d\n",res);
  }
  else if(opt =='/'){
    if(num2==0){
      printf("division not pssbls\n");
    }
    else {
      res = num1/num2;
      printf("div is : %d \n",res);  
     }}
  else if(opt =='*'){
    res = num1*num2;
    printf("mul is : %d",res);
  }
  else{
    printf("Invalid operator ");
  }
}