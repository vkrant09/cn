#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // for(int i=0;i<=n;i++){
    //     cout<<i<<endl;
    /// }
   


// prime number
bool divided =false;
for (int d=2;d<n;d+=2){
    if (n%d == 0){
        divided =true;
    }
    if(divided){
        cout<<"NOT PRIME"<<endl;
    
    }
    else
    cout<<"prime"<<endl;
}
 return 0;}