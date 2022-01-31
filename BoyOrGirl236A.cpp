#include <iostream>
#include <string>

using namespace std;

bool checkUnique(string output, char target)
{
    for (int i = 0; i < output.length(); i++)
    {
        if (output[i] == target)
            return false;
    }

    return true;
}

int main()
{
    string input, ouput = "";
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        bool check = checkUnique(ouput, input[i]);
        if (check)
            ouput += input[i];
    }

    int length = ouput.length();
    // cout << ouput << endl;
    if (length % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}