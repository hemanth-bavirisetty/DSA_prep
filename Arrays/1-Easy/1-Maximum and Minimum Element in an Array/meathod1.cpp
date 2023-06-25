#include <iostream>
#include <algorithm>

using namespace std;

struct Pair
{
    int min, max;
} typedef Pair;

Pair getMinMax(int arr[], int n)
{
    Pair minmax;
    sort(arr, arr + n);
    minmax.max = arr[n - 1];
    minmax.min = arr[0];
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
Complexity Analysis:
The time complexity of this approach is O(n log n), where n is the number of elements in the array, as we are using a sorting algorithm.
The space complexity is O(1), as we are not using any extra space.

Number of Comparisons:
The number of comparisons made to find the minimum and maximum elements is equal to the number of comparisons made during the sorting process.
For any comparison-based sorting algorithm, the minimum number of comparisons required to sort an array of n elements is O(n log n).
Hence, the number of comparisons made in this approach is also O(n log n).
*/