// This is a general approach for programming..

#include <iostream>
using namespace std;

bool isZeroSubarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int current_sum = 0;
        for (int j = i; j < n; j++)
        {
            current_sum += arr[j];

            if (current_sum == 0)
                return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << isZeroSubarray(arr, n);

    return 0;
}

// Time complexity: O(n^2)