#include <iostream>

using namespace std;
void ans(){
int a, b, c;
        cin >> a >> b >> c;
        if ((a + b) >= 10 || (a + c) >= 10 || (b + c) >= 10)
        {
            cout << "YES"<<endl;
        }
        else
            cout << "NO"<<endl;
}
int main()
{
    
    int t;
    cin >> t;
    
    while (t--)
    

       ans() ;
    
    return 0;
}