#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        for (int i = 0; i < 2 * n; i++) {
        // Iterate over each column
        for (int j = 0; j < 2 * n; j++) {
            // Determine whether to print '#' or '.'
            if ((i / 2 + j / 2) % 2 == 0)
                cout << "#";
            else
                cout << ".";
        }
        // Move to the next line after each row
        cout << endl;
    }
            /* code */
        }
        
    
    return 0;
}