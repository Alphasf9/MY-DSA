#include <iostream>

using namespace std;

void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int arr[], int s, int e, int k)
{
    cout << endl;
    print(arr, s, e);
    // base case

    if (s > e) // ellemnt not found  base case 1
    {
        return false;
    }

    int mid = s + (e - s) / 2;

    cout << "value of mid is:" << arr[mid] << endl;

    if (arr[mid] == k)
    { // element found base case 2
        return true;
    }

    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main()
{
    int arr[11] = {2, 4, 6, 10, 14, 18, 67, 78, 90, 100, 543};

    int size = 11;

    int key = 543;

    cout << "present or not:" << binarySearch(arr, 0, 11, key) << endl;

    return 0;
}
