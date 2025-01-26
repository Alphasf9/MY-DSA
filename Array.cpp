#include <iostream>
using namespace std;
int main()
{
    // int arr[500];
    // int n;
    // cout << "How many numbers you want to add in array? " << endl;
    // cin >> n;
    // cout << "Enter the numbers:" << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // cout << "Doubles:";

    // for (int i = 0; i < n; i++)
    // {

    //     cout << 2 * arr[i] << " ";
    // }
    // int arr[500];
    // int n;
    // cout << "How many numbers you want to add in array? " << endl;
    // cin >> n;
    // cout << "Enter the numbers:" << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Now result is:" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] / arr[i] << " ";
    // }

    int arr[500];
    memset(arr, 1, sizeof(arr));

    for (int i = 0; i < 500; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}