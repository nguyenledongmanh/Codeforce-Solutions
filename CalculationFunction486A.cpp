#include <iostream>
#include <math.h>

using namespace std;

long long Function(long long n)
{
    if (n % 2 == 0)
        return n / 2;

    return (n - 1) / 2 - n;
}

int main()
{
    // cout << Function(5) << endl;
    long long n;
    int d = 1000000007;
    cin >> n;
    long long result = (long long)Function(n);
    cout << result << endl;

    return 0;
}