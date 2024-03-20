#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + a[i];
        }
        cout<<"sum: "<<sum<<endl;
        int b[n];
        int sum2=0;
        for(int i=0;i<n;i++){
            b[i]=a[i]-y;
             
        }
        for (int i=0;i<n;i++){
            sum2 = sum2 + b[i];
        }
        cout<<"sum2: "<<sum2<<endl;
        int total= sum2+x;
        if(sum<total){
            cout<<"COUPON"<<endl;}
            else 
            cout<<"NO COUPON"<<endl;
        }

}