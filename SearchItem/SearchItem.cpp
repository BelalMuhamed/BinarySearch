#include <iostream>
using namespace std;
bool SearchInSortedArray(int arr[], int size, int NumToSearch)
{



	int left = 0;
	int right = size - 1;

	while (left <= right) {
		int middle = (right + left) / 2;

		if (arr[middle] == NumToSearch) {
			return true;

		}

		if (arr[middle] < NumToSearch) {
			left = middle + 1;
		}
		else {
			right = middle - 1;
		}
	}
	return false;
}
int main()
{
	const int size = 15;
	int arr[size] = { 1,2,5,7,9,10,15,18,20,22,25,28,30,32,35 };
	cout << SearchInSortedArray(arr, size, 3);
}



