#include <iostream>
#include <string>
using namespace std;

string HelpfulString(int StoreNum[])
{
    string result = "";
    for (int i = 1; i <= 3; i++)
    {
        while (StoreNum[i] > 0)
        {
            result += std::to_string(i) + "+";
            StoreNum[i]--;
        }
    }
    return result;
}

int main()
{
    int StoreNum[4]{0};
    string operatorInput = "";
    cin >> operatorInput;
    for (int i = 0; i < operatorInput.length(); i += 2)
    {
        int index = (int)operatorInput[i] - 48;
        StoreNum[index]++;
    }
    string result = HelpfulString(StoreNum);
    cout << result.substr(0, result.length() - 1) << endl;
    return 0;
}