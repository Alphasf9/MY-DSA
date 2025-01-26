#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] >= arr[mid + 1])
        {
            return mid;
        }

        if (arr[mid - 1] > arr[mid])
        {
            return arr[mid - 1];
        }

        if (arr[s] >= arr[mid])
        {
            e = mid + 1;
        }

        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
}

int main()
{
    int arr[] = {-3, -4, -5, -7, -6, -1, -2};
    int n = 7;
    int ans = getPivot(arr, n);

    cout << "Pivot is at " << arr[ans] << endl;
}