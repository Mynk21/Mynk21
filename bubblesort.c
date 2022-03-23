#include<stdio.h>
int main(){
  int i , j ,n;
  printf("enter Len of the array ");
  scanf("%d",&n);
  int arr[20];
  for(i=0 ; i<n ;i++ ){
  printf("Index : %d",i);
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
  
  

  for(int i =0 ; i<n; i++){
    printf("%d  ",arr[i]);
  }
  }
  
  