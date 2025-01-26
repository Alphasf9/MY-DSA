#include <iostream>
using namespace std;

bool isSorted(int *arr, int size)
{

    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }

    else
    {
        bool remainingpart = isSorted(arr + 1, size - 1);
        return remainingpart;
    }
}

int main()
{
    int arr[7] = {12, 23, 56, 78, 90, 100, 200};
    int size = 7;

    bool ans = isSorted(arr, size);
    if (ans)
    {
        cout << "array is sorted:" << endl;
    }

    else
    {
        cout << "array is not sorted:" << endl;
    }

    return 0;
}