#include <iostream>
using namespace std;

int power(int n)
{
    // base case
    if (n == 0)
        return 1;

    // recursive realtion

    // int smaller=power(n-1);
    int bigger = 2 * power(n - 1);

    return bigger;
}

int main()
{

    int n;
    cout << "give the value:" << endl;

    cin >> n;

    int ans = power(n);

    cout << "your ans is:" << ans << endl;

    return 0;
}