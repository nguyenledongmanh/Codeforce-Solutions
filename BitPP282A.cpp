#include <iostream>
#include <string>
using namespace std;

int checkCase(string input)
{
    char firstChar = input.at(0);

    if (firstChar == 'X')
    {
        char secondChar = input.at(1);

        if (secondChar == '+')
            return 1;

        if (secondChar == '-')
            return 2;
    }

    if (firstChar == '+')
        return 3;

    return 4;
}

int main()
{
    int x = 0, n;
    cin >> n;
    while (n--)
    {
        string input;
        cin >> input;

        int Case = checkCase(input);

        switch (Case)
        {
        case 1:
            x++;
            break;

        case 2:
            x--;
            break;

        case 3:
            ++x;
            break;

        case 4:
            --x;
            break;

        default:
            break;
        }
    }

    cout << x << endl;
    return 0;
}