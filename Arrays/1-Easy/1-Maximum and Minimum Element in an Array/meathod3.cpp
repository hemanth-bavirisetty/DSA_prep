#include <iostream>

using namespace std;

struct Pair
{
    int min, max;
} typedef Pair;

Pair getMinMax(int arr[], int low, int high)
{
    Pair minmax;

    if (low == high)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }

    if (high == low + 1)
    {
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
    }

    int mid = (low + high) / 2;
    Pair mml = getMinMax(arr, low, mid);
    Pair mmr = getMinMax(arr, mid + 1, high);

    if (mml.max > mmr.max)
    {
        minmax.max = mml.max;
    }
    else
    {
        minmax.max = mmr.max;
    }

    if (mml.min < mmr.min)
    {
        minmax.max = mml.min;
    }
    else
    {
        minmax.max = mmr.min;
    }

    return minmax;
}

int main()
{
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int arr_size = 6;

    Pair minmax = getMinMax(arr, 0, arr_size - 1);

    cout << "Minimum element is " << minmax.min << endl;
    cout << "Maximum element is " << minmax.max << endl;

    return 0;
}