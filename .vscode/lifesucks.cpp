#include<iostream>
using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int arr[n];
         for(int i=0; i<n; i++){
               cin>>arr[i];
         }
         int count = 0;
         for(int i=0; i<n; i++){
               for(int j=i+1; j<n; j++){
                    if(arr[i]*arr[j]==(i+1)+(j+1)){
                         count++;
                    }
                    if (arr[i] * arr[j] > i + j + 2) {
                    break;}
               }
         }
         cout<<count<<" "<<endl;
     }
     
     return 0;
}