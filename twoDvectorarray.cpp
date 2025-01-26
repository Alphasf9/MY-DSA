#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // vector<vector<int>> arr;

    // vector<int> a{1, 2, 3};
    // vector<int> b{4, 5, 6, 7, 8, 9};
    // vector<int> c{7, 8};

    // arr.push_back(a); // arr--> outer vector
    // arr.push_back(b);
    // arr.push_back(c);

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     };
    // };

    vector<vector<int>> arr(3, vector<int>(5, 102));

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        };
        cout << endl;
    }
}