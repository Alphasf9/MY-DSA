#include <iostream>
using namespace std;

bool find(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int arr[10] = {23, 45, 34, 244, 455, 167, 990, 1000, 899, 1234};
    int size = 10;
    cout << "Enter the element you want to search? ";
    int key;
    cin >> key;

    if (find(arr, size, key))
    {
        cout << "Found" << endl;
    }

    else
    {
        cout << "Not found" << endl;
    }
}