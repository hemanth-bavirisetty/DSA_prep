#include <iostream>

using namespace std;

struct Pair
{
    int min, max;
} typedef Pair;

Pair getMinMax(int arr[], int n)
{
    Pair minmax;
    int i = 0;
    if (n == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }

    if (arr[0] > arr[1])
    {
        minmax.min = arr[1];
        minmax.max = arr[0];
    }
    else
    {
        minmax.min = arr[0];
        minmax.max = arr[1];
    }

    for (i = 2; i < n; i++)
    {
        if (minmax.min > arr[i])
            minmax.min = arr[i];
        if (minmax.max < arr[i])
            minmax.max = arr[i];
    }
    return minmax;
}

int main()
{
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    Pair minmax = getMinMax(arr, arr_size);

    cout << "Minimum element is " << minmax.min << endl;
    cout << "Maximum element is " << minmax.max << endl;

    return 0;
}

/*
Time Complexity: O(n)
Auxiliary Space: O(1) as no extra space was needed.

In this method, the total number of comparisons is 1 + 2(n-2) in the worst case and 1 + n – 2 in the best case.
In the above implementation, the worst case occurs when elements are sorted in descending order and the best case occurs when elements are sorted in ascending order.


*/