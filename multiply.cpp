#include<iostream>
using namespace std;
int multiply(int a,int b){
    int c=a*b;
    return c;
}
int main(){
    int s ,d;
    cin>>s>>d;
    cout<<multiply(s,d);
    return 0;
}