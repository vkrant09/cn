#include<iostream>
#include<climits>
using namespace std;

void sum(int a[],int n){
    int sum=0;
for(int i=0;i<n;i++){
    sum=sum+a[i];
}
cout<<"\n"<<"sum is "<<sum;}


int main(){
    int n;
    cin>>n;
    int array[100];
    int i=1;
    for (int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i =0;i<n;i++){
        cout<<array[i];
    }
    sum(array,n);

    return 0;
}
