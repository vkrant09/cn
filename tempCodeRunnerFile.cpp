#include <bits/stdc++.h>
#include<limits>
using namespace std;

void ans(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=INT_MIN;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            count=i;
        } 
        }
        int sum=0;
    for(int i=0;i<=count;i++){
        sum=sum+a[i];
    }
    sum=sum+a[count];
        
    
    cout<<sum<<endl;
}

int main() {
int t;cin>>t;
while(t--){
    ans();
}

}
