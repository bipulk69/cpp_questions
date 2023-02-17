/*
Prefix Sum Array: The prefix sum array of any array, arr[] is defined as an array of same size say, prefixSum[] such that the value at any index i in prefixSum[] is sum of all elements from indexes 0 to i in arr[].
That is,
prefixSum[i] = arr[0] + arr[1] + arr[2] + . . . . + arr[i]
for all 0 <= i <= N.

Input  : arr[] = {10, 20, 10, 5, 15}
Output : prefixSum[] = {10, 30, 40, 45, 60}

Explanation : While traversing the array, update
the element by adding it with its previous element.
prefixSum[0] = 10,
prefixSum[1] = prefixSum[0] + arr[1] = 30,
prefixSum[2] = prefixSum[1] + arr[2] = 40 and so on.


*/

void fillPrefixSum(int arr[], int N, int prefixSum[])
{
    prefixSum[0] = arr[0];

    // Adding present element
    // with previous element
    for (int i = 1; i < N; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}
