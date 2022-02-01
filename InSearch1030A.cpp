#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool HardOrNot = false;

    while (n--)
    {
        int easyorhard;
        cin >> easyorhard;
        if (easyorhard == 0)
            continue;

        HardOrNot = true;
        break;
    }

    HardOrNot ? cout << "HARD" << endl : cout << "EASY" << endl;

    return 0;
}