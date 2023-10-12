#include<iostream>
using namespace std;
int main(){
      int t;
      cin>>t;
      for(int k=1;k<=t;k++){
            int n,a,b,high=0;
            cin>>n;
            cin>>a>>b;
            int arr[n];
            for(int i=0;i<n;i++){
                  cin>>arr[i];
            }
            for(int i=0;i<n;i++){
                  for(int j=i+1;j<n;j++){
                        if(i!=j){
                        if(i+j>=a && i+j<=b){
                        high = max(high,(i+j));
                        }
                  }
            }
      }
      cout<<"Case "<<k<<": "<<high<<endl;
      }
return 0;
}