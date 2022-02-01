#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstLayer = "I hate";
    string secondLayer = "I love";
    int n;
    cin >> n;
    string result = "";
    int run = 1;
    while (n--)
    {
        if (run % 2 != 0)
            result += firstLayer + " ";
        else
            result += secondLayer + " ";

        if (n > 0)
            result += "that ";
        run++;
    }
    result += "it";
    cout << result << endl;
    return 0;
}