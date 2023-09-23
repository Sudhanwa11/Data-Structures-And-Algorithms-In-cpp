#include <bits/stdc++.h> 

int sumOfMaxMin(int arr[], int n) {
	// Initialize min and max to the first element in the array
    int minValue = arr[0];
    int maxValue = arr[0];

    // Iterate through the array to find min and max
    for (int i = 1; i < n; i++) {
        if (arr[i] < minValue)
            minValue = arr[i];
        else if (arr[i] > maxValue)
            maxValue = arr[i];
    }
	return minValue + maxValue;

	/*
    // Sort the array in ascending order using std::sort.
    sort(arr, arr + n);

    // Obtain the minimum and maximum values after sorting.
    int mini = arr[0];  // Minimum is at the beginning (after sorting).
    int maxi = arr[n - 1];  // Maximum is at the end (after sorting).

    // Calculate the sum of the minimum and maximum values.
    return maxi + mini;  // Return the sum of the minimum and maximum.
	*/
}
