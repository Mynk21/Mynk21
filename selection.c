#include <stdio.h>
int main(){
  int n ,i, j, mini;
  printf("Enter length of array ");
  scanf("%d",&n);

  int arr[20];
  for(int i = 0 ; i<n ; i++){
    scanf("%d",&arr[i]);
  }

    for (i = 0; i < n-1; i++)    
    {  
        mini = i; 
      //minimum element in unsorted array  
          
        for (j = i+1; j < n; j++) { 
        if (arr[j] < arr[mini]){  
            mini = j;  }}
      
    int temp = arr[mini];  
    arr[mini] = arr[i];  
    arr[i] = temp;  
    }  
  for(int i = 0 ; i<n ; i++){
    printf("%d " , arr[i]);
      }


  
}