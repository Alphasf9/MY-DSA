#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    int sizea = 5;

    vector<int> brr{6, 7, 8, 9};
    int sizeb = 4;

    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }

    for (int i = 0; i < brr.size(); i++)
    {
        ans.push_back(brr[i]);
    }

    cout << "union of above array is: " << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}