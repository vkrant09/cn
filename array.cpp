#include<iostream>
using namespace std;

int main(){
    int a[10];
    
    // int n;
    // cin>>n;
    int i=1;
    while(i<=10){
        cin>>a[i];
        
        i++;

    }
    for (int i=0;i<10;i++){
        cout<<a[i];
    }
    return 0;
}