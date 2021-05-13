//Linear search and Binary search and analyze its time complexity

/*In linear search algorithm, we compare targeted element with each element of the array.
 If the element is found then its position is displayed.

The worst case time complexity for linear search is O(n).

*/



#include <bits/stdc++.h>
using namespace std;

// Linearly search x in arr[]. If x is present then return its
// location, otherwise return -1
int linearSearch(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}




/*
Binary Search: Search a sorted array by repeatedly dividing the search interval in half. Begin with an 
interval covering the whole array. If the value of the search key is less than the item in the middle of the
 interval, narrow the interval to the lower half. Otherwise, narrow it to the upper half. Repeatedly check until
the value is found or the interval is empty.
  
The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n).
*/ 



// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is present at the middle
		// itself
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then
		// it can only be present in left subarray
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		// Else the element can only be present
		// in right subarray
		return binarySearch(arr, mid + 1, r, x);
	}

	// We reach here when element is not
	// present in array
	return -1;
}


int main(void)
{
	
	
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 4;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result;
	
	int no;
	cout<<" PRESS 1 FOR LINEAR SEARCH \n PRESS 2 FOR BINARY SEARCH\n";
	cin>>no;

	if(no==1)
		result = linearSearch(arr, n, x);
	else
		result = binarySearch(arr, 0, n - 1, x);
	
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result;
	return 0;
}







