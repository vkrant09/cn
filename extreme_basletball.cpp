#include<iostream>
using namespace std;

void ans(){
 int n,m;cin>>n>>m;
        int s = 0;
        int l = n - m;
        while(l < 10) {
            n += 3;
            s++;
            l = n - m;
        }
        cout<<s<<endl;
}

int main(){
  
    int t;
    cin>>t;
    while(t--) {
        ans();
       
    }
    return 0;
}
   