#include <bits/stdc++.h>
using namespace std;

void ans(){
    int n;cin>>n;
    int sum=0;
    if(n%2==0){
        sum = 13*(n/2);
    }
    else{
        sum = (13*(n/2))+6 ;
    }
    cout<< sum<<endl;
}


int main() {
int t;cin>>t;
while(t--){
    ans();
}

}
