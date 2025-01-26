#include <iostream>
#include <limits.h>

using namespace std;

void findMaxi(int arr[], int n, int i, int &maxi)
{
    if (i >= n)
    {
        return;
    }

    if (arr[i] > maxi)
    {
        maxi = arr[i];
    }

    findMaxi(arr, n, i + 1, maxi);
}

int main()
{
    int arr[] = {1, 56, 78, -1, 23, 4};
    int n = 6;

    int maxi = INT_MIN;

    int i = 0;

    findMaxi(arr, n, i, maxi);

    cout << "Maximum value: " << maxi << endl;

    return 0;
}
