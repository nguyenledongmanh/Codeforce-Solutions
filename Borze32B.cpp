#include <iostream>
#include <stack>
#include <string>

using namespace std;
string cmp0 = ".", cmp1 = "-.", cmp2 = "--";

string cvtDigit(string cmp)
{
    if (cmp.compare(cmp0) == 0)
        return "0";
    else if (cmp.compare(cmp1) == 0)
        return "1";
    else if (cmp.compare(cmp2) == 0)
        return "2";
    return "";
}

int main()
{
    //Changes
    string cmp = "";
    stack<char> store;
    string input;
    cin >> input;
    int idx = 0;
    string result = "";
    for (idx = 0; idx < input.length(); idx++)
    {
        store.push(input[idx]);
        cmp += store.top();
        while (!store.empty())
        {
            if (cvtDigit(cmp) == "")
            {
                store.push(input[++idx]);
                cmp += store.top();
                store.pop();
            }

            store.pop();
            result += cvtDigit(cmp);
        }
        cmp = "";
    }
    cout << result << endl;
    return 0;
}
