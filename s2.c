#include<stdio.h>
int main(){
    int  n , i ;

  printf("enter Len of the array ");
  scanf("%d",&n);
  int arr[n];
  for(i=0 ; i<n ;i++ ){
  printf("Index : %d",i);
    scanf("%d ",&arr[i]);
  }

  
  
  
  for (int i = 0; i < n; i++) {
            
            int last = n - i - 1;
            int max = 0;
        for (int j = 0; j <= last; i++) {
            if (arr[max] < arr[j]) {
                max = j;
            }
        }



    
    }

  
}