#include <iostream>
#include "limits.h"
using namespace std;
int main()
{
    int arr[] = {12, 23, 44, 55, 3, 12, 90, 100, 41, 0};
    int size = 10;

    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi == arr[i];
        }
    }

    cout << "Your maximum number is: " << maxi << endl;

    return 0;
}