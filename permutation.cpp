#include <bits/stdc++.h>
using namespace std;

int main() {
 int  t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        
       
    
        for(int i=1;i<=n;i++){
           cin>>arr[i];
          
        }
        int a=0;
        for(int i=1;i<=n;i++){
            if(arr[i]==1&&arr[i]==i){
                swap(arr[i],arr[i+1]);
                a++;
            }
            else if(arr[i]==i){
                swap(arr[i],arr[i+1]);
                a++;
            }
        }
        cout<<a<<endl;
        
}
}
  
