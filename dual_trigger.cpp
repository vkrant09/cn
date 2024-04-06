#include <iostream>
using namespace std;

void ans()
{
    int size;
    string arr;
    cin >> size >> arr;
    
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == '1')
        {
            count++;
        }
    }
    bool allSame = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] =='1'&& arr[i+1]=='1' )
        {
            allSame = true;
            
        }
    }

    if (count%2==1 ||(count==2 && allSame))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    
}

int main()
{ ios_base::sync_with_stdio(0);
   cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ans();
    }
    return 0;
}