// C++ program to print string permutation
#include <iostream>
#include <string>
using namespace std;

/* Function to swap values at two pointers */
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/* Function to print permutations of string
This function takes three parameters:
1. String
2. Starting index of the string
3. Ending index of the string.
*/

void string_permutation(char *a, int left, int right)
{
    int i;
    if (left == right)
        cout << a << endl;
    else
    {
        for (i = left; i <= right; i++)
        {
            swap((a + left), (a + i));
            string_permutation(a, left + 1, right);
            swap((a + left), (a + i));
        }
    }
}

int main()
{
    char str[] = "ABC";
    int n = strlen(str);
    string_permutation(str, 0, n - 1);
    return 0;
}
