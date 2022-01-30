#include <iostream>
#define MAX 100
using namespace std;

int main()
{

    int A[MAX];
    int n, k;
    int countCandidates = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] >= A[k - 1] && A[i] > 0)
        {
            countCandidates++;
        }
    }

    cout << countCandidates << endl;

    return 0;
}