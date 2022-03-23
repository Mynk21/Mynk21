#include<stdio.h>
int main(){
  int row ,col;
  printf("Enter now row ");
  scanf("%d",&row);
  printf("enter no of col ");
  scanf("%d",&col);
  int arr[row][col];

  for(int i = 0 ; i<row ; i++){
    for(int j =0; j<col ; j ++ ){
      printf("Enter element in row :%d col: %d",i,j);
      scanf("%d",&arr[i][j]);
      
    }
  }
    for(int i = 0 ; i<row ; i++){
    for(int j =0; j<col ; j ++ ){
      printf("%d  ",arr[i][j]);
     
      
    }
      printf("\n");
  }

  
  
  
}