#include <iostream>
using namespace std;

void printRowWiseSum(int arr[][3], int row, int col)
{
    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        };
    };
    cout << sum << endl;
};

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;

    cout << "Row wise:" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Col wise:" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    cout << "Row wise sum is : " << endl;
    printRowWiseSum(arr, row, col);
}
