#include <iostream>

using namespace std;

bool check(int a, int b, int c)
{
    int count = 0;

    if (a == 1)
        count++;

    if (b == 1)
        count++;

    if (c == 1)
        count++;

    if (count >= 2)
        return true;

    return false;
}
int main()
{
    int n;
    cin >> n;
    int result = 0;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        bool AddOrNot = check(a, b, c);

        if (AddOrNot)
            result++;
    }

    cout << result << endl;

    return 0;
}