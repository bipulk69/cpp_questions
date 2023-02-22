// Print number from n to 1 using recursion
#include <iostream>
using namespace std;

void print_no(int n)
{
    if (n == 0)
        return;

    cout << n << " ";
    print_no(n - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        print_no(n);
    }
    return 0;
}