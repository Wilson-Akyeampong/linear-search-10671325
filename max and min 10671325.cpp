#include <iostream>

using namespace std;



// Naive solution to find minimum and maximum number in an array
void findMinAndMax(int arr[], int n, int &min, int &max)
{
	// initialize minimum and maximum element by first element
	max = arr[0], min = arr[0];

	// do for each element in the array
	for (int i = 1; i < n; i++)
	{
		// if current element is greater than maximum found so far
		if (arr[i] > max) {
			max = arr[i];
		}

		// if current element is smaller than minimum found so far
		else if (arr[i] < min) {
			min = arr[i];
		}
	}
}

// main function
int main()
{
	int arr[] = { 5, 7, 2, 4, 9, 6 };
	int n = sizeof(arr)/sizeof(arr[0]);

	// to store minimum and maximum element respectively
	int min, max;

	findMinAndMax(arr, n, min, max);

	cout << "The minimum element in the array is " << min << '\n';
	cout << "The maximum element in the array is " << max;

	return 0;
}
