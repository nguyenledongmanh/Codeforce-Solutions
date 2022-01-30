#include <iostream>

using namespace std;

void YoN(int w)
{
    int wFirstPart = 1;
    int wSecondPart = 1;
    while (wSecondPart > 0)
    {
        wSecondPart = w - wFirstPart;

        if ((wFirstPart % 2 == 0 && wFirstPart > 0) && (wSecondPart % 2 == 0 && wSecondPart > 0))
        {
            cout << "YES" << endl;
            return;
        }
        wFirstPart++;
    }

    cout << "NO" << endl;
}

int main()
{

    int w;
    cin >> w;
    YoN(w);

    return 0;
}