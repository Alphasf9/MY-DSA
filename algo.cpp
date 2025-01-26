#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7};
    if (binary_search(v.begin(), v.end(), 5))
    {
        cout << "Found it!!" << endl;
    }
    else
    {
        cout << "nOT FOUND" << endl;
    }
}