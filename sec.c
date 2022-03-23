#include <stdio.h>
int main(){
  int n ,i, j, maxi;
  printf("Enter length of array ");
  scanf("%d",&n);

  int arr[20];
  for(int i = 0 ; i<n ; i++){
    scanf("%d",&arr[i]);
  }

    for (i = 0; i < n-1; i++)    
    {  
        maxi = i; 
      //minimum element in unsorted array  
          
        for (j = 0; j < n-i-1; j++) { 
        if (arr[j] > arr[maxi]){  
            maxi = j;  }}
      
    int temp = arr[maxi];  
    arr[maxi] = arr[i];  
    arr[i] = temp;  
    }  
  for(int i = 0 ; i<n ; i++){
    printf("%d " , arr[i]);
      }


  
}