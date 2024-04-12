#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int d=c/2;
        if(c<(2*b)){
if(a%2==0){
    cout<<c<<endl;

}
else
cout<<(c*(a-2))+ b<<endl;
        }
        else cout<<b*a<<endl;
    }
    return 0;
}