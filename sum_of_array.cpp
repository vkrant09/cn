#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[100];
    int i = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    cout << "\n"
         << "sum is " << sum;

    return 0;
}
