#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENTER ONLY ODD NUMBER : ";
    cin>>n;
    int n1=(n+1)/2;
    int n2=n1-1;
    int i=1;
    while(i<=n1){
        int j=1;
        int k=1;
        while(k<=n1-i){
        cout<<" ";
        k++;
        }
        while(j<=2*i-1){
         cout<<"*";
        j++;
        }
         cout<<endl;
        i++;
    }
    int m=1;
    while(m<=n2){
        int k=1;
        while(k<=m){
            cout<<" ";
        k++;
        }
        int j=1;
        while(j<=2*(n2-m)+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        m++;
    }
    return 0;
}
 /*

OUTPUT
ENTER ONLY ODD NUMBER : 5
  *
 ***
*****
 ***
  *
  
  */