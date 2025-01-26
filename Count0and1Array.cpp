#include <iostream>
using namespace std;
int main()
{
    int arr[15] = {0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1, 0, 1};
    int size = 15;
    int numZero = 0;
    int numOne = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            numZero++;
        }

        if (arr[i] == 1)
        {
            numOne++;
        }
    }

    cout << "Number of zeroes in given array is : " << numZero << endl;
    cout << "Number of one in given array is : " << numOne << endl;
}