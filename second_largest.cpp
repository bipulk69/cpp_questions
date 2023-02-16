#include <iostream>
using namespace std;
int getLargest(int arr[], int n);

int secondLargest(int arr[], int n)
{
    int largest = getLargest(arr, n);
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (res == -1)
        {
            return i;
        }
        else if (arr[i] > arr[res])
            res = i;
    }
    return res;
}

int getLargest(int arr[], int n)
{
    int largest = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
            largest = i;
    }
    return largest;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << secondLargest(arr, n) << endl;
    }
    return 0;
}