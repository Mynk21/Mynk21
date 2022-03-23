#include <stdio.h>
int main() {
 int n;
  printf("Enter number ");
  scanf("%d",&n); 
  int orignal = n;
  int rev=0;
  while(n!=0){
    int rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    
    
   
  }
  if(orignal==rev){
    printf("palindrome");
    
  }
  else{
    printf("Not palindrome");
  }
  printf("rev number %d",rev);
  
  }