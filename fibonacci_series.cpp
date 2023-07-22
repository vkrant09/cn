#include<iostream>
using namespace std;

int fibonacci(int a){
    int i=1;
    bool ans;
    if(a==(a-1)+(a-2)){
    ans=true;}
    else
    ans =false;
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}