#include <iostream>
#include <limits.h>
using namespace std;

int getMax(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (maxi < arr[i][j])
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

void transposeMatrix(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void printArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

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

    cout << endl;

    cout << "Maximum number in given array is : " << getMax(arr, 3, 3);

    printArray(arr, 3, 3);
    transposeMatrix(arr, 3, 3);
    printArray(arr, 3, 3);
}
