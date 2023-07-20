#include<iostream>
using namespace std;

    int main(){
    int a;
    cout<<"enter number ";
    cin>>a;
    int d=2;
    bool divided=false;
    while(d<a){
        if (a%d==0)
        {cout<<"number is not prime!!";
        divided=true;
        break;}
        d++;
        if(!divided){
        cout<<"PRIME";}
        
    }
    return 0;
}
  