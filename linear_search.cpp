#include<iostream>
using namespace std;

int main(){
    int n;  
    cin>>n;
    int array[100];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int a;
    cout<<"enter integer to be find: ";
    cin>>a;
    for(int i=0;i<=n;i++){
        if(array[i]==a){
            cout<<"integer is in the "<< i<<" index";

        } 
    }

    return 0;
}
