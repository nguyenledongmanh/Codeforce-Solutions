#include <iostream>

using namespace std;

bool getArray(long long n, int *array)
{
    array[0] = 2;
    int sumEven = 2;
    for (int i = 1; i < n / 2; i++)
    {
        array[i] = array[i - 1] + 2;
        sumEven += array[i];
    }

    array[n / 2] = 1;
    int sumOdd = 1;
    for (int i = n / 2 + 1; i < n - 1; i++)
    {
        array[i] = array[i - 1] + 2;
        sumOdd += array[i];
    }

    array[n - 1] = sumEven - sumOdd;
    if (array[n - 1] % 2 == 0)
        return false;
    return true;
}

void PrintArray(int *array, long long n)
{
    for (int i = 0; i < n - 1; i++)
    {
        cout << array[i] << " ";
    }
    cout << array[n - 1] << endl;
}

int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        long long length;
        cin >> length;
        bool checkPrint;
        int *array = new int[length];
        checkPrint = getArray(length, array);

        if (checkPrint && length > 2)
        {
            cout << "YES" << endl;
            PrintArray(array, length);
        }
        else
            cout << "NO" << endl;

        delete[] array;
    }

    return 0;
}