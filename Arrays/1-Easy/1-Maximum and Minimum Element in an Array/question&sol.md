Given an array of size N. The task is to find the maximum and the minimum element of the array using the minimum number of comparisons.

Examples:

```
Input: arr[] = {3, 5, 4, 1, 9}
Output: Minimum element is: 1
Maximum element is: 9

Input: arr[] = {22, 14, 8, 17, 35, 3}
Output: Minimum element is: 3
Maximum element is: 35
```

1. Maximum and minimum of an array using Sorting:
   Approach:
   One approach to find the maximum and minimum element in an array is to first sort the array in ascending order. Once the array is sorted, the first element of the array will be the minimum element and the last element of the array will be the maximum element.

Algorithm:

Initialize an array.
Sort the array in ascending order.
The first element of the array will be the minimum element.
The last element of the array will be the maximum element.
Print the minimum and maximum element.

2. Maximum and minimum of an array using Linear search:

Algorithm:

Initialize values of min and max as minimum and maximum of the first two elements respectively. Starting from 3rd, compare each element with max and min, and change max and min accordingly (i.e., if the element is smaller than min then change min, else if the element is greater than max then change max, else ignore the element)

3. Maximum and minimum of an array using the tournament method:

Algorithm:

Divide the array into two parts and compare the maximums and minimums of the two parts to get the maximum and the minimum of the whole array.

```
Pair MaxMin(array, array_size)
if array_size = 1
return element as both max and min
else if arry_size = 2
one comparison to determine max and min
return that pair
else
 recur for max and min of left half
recur for max and min of right half
one comparison determines true max of the two candidates
one comparison determines true min of the two candidates
return the pair of max and min
```
