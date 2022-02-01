#include <iostream>
#include <vector>
using namespace std;

void inputArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void Insertion(int A[], int n)
{
    int i, j, x;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        x = A[i];
        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}

void subArray(int a[], int n, int *b)
{
    for (int i = 0; i < n - 1; i++)
    {
        b[i] = a[i + 1] - a[i];
    }
}

int findMin(int *b, int n)
{
    int min = b[0];
    for (int i = 1; i < n; i++)
    {
        if (b[i] < min)
            min = b[i];
    }
    return min;
}

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        int a[n];
        inputArray(a, n);
        Insertion(a, n);
        int *b = new int[n];
        subArray(a, n, b);
        int min = findMin(b, n - 1);
        cout << min << endl;

        delete[] b;
    }
    return 0;
}