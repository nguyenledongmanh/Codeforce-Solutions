#include <iostream>
#include <string>
using namespace std;
// Happy New Year
string cvtUpper(string input)
{
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] <= 'z' && input[i] >= 'a')
        {
            input[i] = (char)((int)input[i] - 32);
        }
    }

    return input;
}

string cvtLower(string input)
{
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] <= 'Z' && input[i] >= 'A')
        {
            input[i] = (char)((int)input[i] + 32);
        }
    }
    return input;
}

int main()
{
    string input;
    cin >> input;
    int countUp = 0, countLow = 0;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] <= 'Z' && input[i] >= 'A')
            countUp++;

        if (input[i] <= 'z' && input[i] >= 'a')
            countLow++;
    }

    if (countUp > countLow)
        input = cvtUpper(input);
    else
        input = cvtLower(input);

    cout << input << endl;

    return 0;
}