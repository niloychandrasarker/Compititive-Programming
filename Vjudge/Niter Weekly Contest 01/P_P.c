#include<stdio.h>
int  main(){
     int k1,k2,k3;
    int n;

   scanf("%d",&n);
   if(n<20000000){
   k3=n%1000;
    n= n/1000;
     k2=n%1000;
      n=n/1000;
     k1=n%1000000;
   cout  << k1 <<","  << k2 << ',' << k3  <<endl;
   }
   return 0;

}