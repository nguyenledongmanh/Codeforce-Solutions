#include <iostream>
#include <string>
using namespace std;

string cvtToTitle(string input)
{
    char firstChar = input.at(0);

    if (firstChar <= 'Z' && firstChar >= 'A')
    {
        return input;
    }

    input[0] = (char)(int(firstChar) - 32);

    return input;
}

int main()
{
    string input;
    cin >> input;

    input = cvtToTitle(input);
    cout << input << endl;
    return 0;
}