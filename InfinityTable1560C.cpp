#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        bool run = true;
        long long u1 = 1;
        long long un_row, un_col, un_diagonal;
        long long squareLength = 1;
        long long target;
        cin >> target;
        if (target == 1)
        {
            cout << 1 << " " << 1 << endl;
        }

        else
        {
            while (run)
            {
                un_row = u1 + (squareLength) * (squareLength);
                un_diagonal = u1 + squareLength * (squareLength + 1);
                un_col = (squareLength + 1) * (squareLength + 1);

                if ((un_row <= target) && (un_diagonal >= target) || (un_diagonal < target) && (target <= un_col))
                    run = false;
                else
                    squareLength++;
            }

            long long r, c;
            if (target == un_row)
            {
                r = 1;
                c = squareLength + 1;
            }
            else if (target == un_col)
            {
                c = 1;
                r = squareLength + 1;
            }
            else if (target == un_diagonal)
            {
                c = r = squareLength + 1;
            }
            else
            {
                long long distance;
                if (target < un_diagonal)
                {
                    distance = un_diagonal - target;
                    c = squareLength + 1;
                    r = squareLength + 1 - distance;
                }
                else if (target > un_diagonal)
                {
                    distance = target - un_diagonal;
                    r = squareLength + 1;
                    c = squareLength + 1 - distance;
                }
            }

            cout << r << " " << c << endl;
        }
    }
    return 0;
}