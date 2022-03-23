#include <stdio.h>
int main(){
int target ; 
  printf("Enter target element ; ");
  scanf("%d",&target);
  int n ; 
  printf("\nEnetr length of array\n ");
  scanf("%d",&n);
  int arr[n];
  for(int i =0; i<n ; i++){
  printf("Index %d   ",i);
    scanf("%d",&arr[i]);
  }
  
  for(int i = 0 ; i<n ; i++){
  for(int j =0; j<n-i-1 ; j++){
    if(arr[j]>arr[j+1]){
      int temp = arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
    }
  }}

  
  int start = 0 ; 
  int end=n-1;
  while(start<=end){
     int mid = (start+end)/2;

    if (arr[mid]==target){
      printf("Index is present at %d \n",mid);
    return mid;
    }
    else if (arr[mid]>target){
      end = mid -1;
      }

    else{
      start = mid+1;    }

    
  }
  printf("ELEMENT NOT FOUND\n");
  return -1;
  


  
  
}