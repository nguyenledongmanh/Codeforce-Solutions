#include <iostream>
using namespace std;

int findMax(int b[], int n)
{
    int MAX = b[0];
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (b[i] >= MAX)
        {
            MAX = b[i];
            index = i;
        }
    }

    return index;
}

int findMin(int a[], int n)
{
    int min = a[0];
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
            index = i;
        }
    }
    return index;
}

void inputValue(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int getSum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        inputValue(a, n);
        inputValue(b, n);

        while (k--)
        {
            int maxVal = findMax(b, n);
            int minVal = findMin(a, n);
            if (a[minVal] < b[maxVal])
            {
                swap(a[minVal], b[maxVal]);
            }
        }

        int sum = getSum(a, n);
        cout << sum << endl;
    }

    return 0;
}