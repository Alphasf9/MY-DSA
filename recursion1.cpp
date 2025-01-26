#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1; // base case:where you need to stop;
    }
    // int small=factorial(n-1);

    // int big=n*small;

    // return big;

    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "tell the number:" << endl;

    cin >> n;

    int ans = factorial(n);

    cout << "here is your fact:" << ans << endl;
}