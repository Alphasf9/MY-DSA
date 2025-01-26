#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;

    int ans = sizeof(arr) / sizeof(int);
    cout << ans << endl;

    arr.push_back(8);
    arr.push_back(123);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    arr.pop_back();
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "The default size of vector is: " << arr.size() << endl;
    cout << arr.capacity();

    cout << endl;

    vector<int> brr(10, -109);
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;
    int n;
    cout << "Enter the size: ";

    cin >> n;
    vector<int> crr(n, 990);
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }

    cout << endl;
    cout << "Is crr is empty or not: " << crr.empty() << endl;
}