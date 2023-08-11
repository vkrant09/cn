#include <iostream>
using namespace std;

int main()
{
    int n;  
    cin >> n;
    int i = 2, a = 0;
    while (i <= n)
    {
        a += i;
        i += 2;
    }  
    cout << a;
    return 0;
}