// #include <stdio.h>
// int main(){
//   int n , r;
//   int nfact=1, nmfact=1 ,rfact=1;
//   printf("Enter n and r ");
//   scanf("%d%d",&n,&r);
  
//   for(int i = 1;i<=n;i++){
//      nfact=nfact*i;
//   }
//   for(int i = 1;i<=n-r;i++){
//      nmfact=nmfact*i;
//   }
//   for(int i = 1;i<=r;i++){
//      rfact=rfact*i;
//   }

//   float  ncr= (float)nfact/(nmfact*rfact);

// printf("nCr : %f",ncr);
// }



int  fact(int n){
int facto=1;
  for(int i = 1;i<=n;i++){
     facto=facto*i;
  }
  
}





#include <stdio.h>
int main(){
  int n , r;
  printf("Enter n and r ");
  scanf("%d%d",&n,&r);

  float ncr=   (float) (fact(n))/(fact(n-r)*fact(r));
  printf("nCr : %f",ncr);

  
}