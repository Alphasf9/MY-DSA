#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> &vec, int m)
{
    int s = 0 + m;
    int e = vec.size() - 1;

    while (s < e)
    {
        s++;
        swap(vec[s], vec[e]);
        e--;
    }
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    int m;
    cout << "Enter the value of m: " << endl;
    cin >> m;
    cout << "Answer is: ";
    reverseVector(vec, m);
    for (int i = 0; i < 6; i++)
    {
        cout << vec[i] << " ";
    }
    
}