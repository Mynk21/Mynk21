#include<stdio.h>

int main(){
  int n ,rem , i =1,rev =0,temp ; 

  printf("Enter a number ");
  scanf("%d",&n);
   temp = n;
  while(temp!=0){
    rem = temp%10;
    rev = rev*10 +rem;
    temp=temp/10;
    
  }
  if (n==rev )
  printf("palindrome number");

  else
    printf("not a palindrome ");
  
}