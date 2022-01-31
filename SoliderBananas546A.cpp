#include <iostream>
using namespace std;

int main()
{
    int k, w, n;
    cin >> k >> n >> w;
    int totalDollar = 0;
    for (int i = 1; i <= w; i++)
    {
        totalDollar += i * k;
    }

    int moneyNeed = totalDollar - n;
    if (moneyNeed <= 0)
        cout << 0 << endl;
    else
        cout << moneyNeed << endl;
    return 0;
}