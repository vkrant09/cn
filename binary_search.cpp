#include<iostream>
using namespace std;

int binary_search(int array[], int size, int val){
    int start=0, end =size;
    while(start<=end){
        int mid=(start+end)/2;
        if (array[mid]==val){
            return mid;
        }
        else if (val<array[mid]){
            end=mid-1;
        }
        else
        start = mid +1;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int array[100];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int x;
    cin>>x;
    cout<<binary_search(array,n,x);
    return 0;
}