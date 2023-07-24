#include <iostream>
using namespace std;

void Insertion_sort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int current = array[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (current < array[j])
                array[j + 1] = array[j];
            else
                break;
        }
        array[j + 1] = current;
    }
}

int main()
{
    int n;
    cout << "ENTER SIZE OF THE ARRAY: " << endl;
    cin >> n;
    int array[100];
    cout << "ENTER ELEMENTS IN THE ARRAY: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "UNSORTED ARRAY: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    Insertion_sort(array, n);
    cout << "\nSORTED ARRAY: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}