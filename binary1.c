

#include <stdio.h>

int main()
{
    
    int tar;
    printf("enter target element ");
    scanf("%d",&tar);
    int n;
    printf("Enter length of the array ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i =0 ; i<n;i++){
        scanf("%d",&arr[i]);
        }
        
    for(int i = 0 ; i<n; i++){
        for(int j = 0 ; j<n-i-1 ; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
        for(int i =0 ; i<n;i++){
        printf("%d ",arr[i]);
        }
        
    int start=0;
    int end = n-1;
    
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==tar){
            printf("Target element found at %d \n",mid);
            return 0;
        }
        
        else if(tar>arr[mid]){
            start=mid+1;
            
            
        }
        else{
            end = mid -1;
        }
        
        
        
    }
        
}







