#include <iostream>
#include "Heap.h"
#include "Quick.h"

using namespace std;

int main()
{
	/*
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);

	heapSort(arr, n);

	cout << "Sorted array is \n";
	printArray(arr, n);
   */
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, n - 1);
	cout << "Sorted array: ";
	print(arr, n);

	//cout << "05.12.18" << endl;
	system("pause");
	return 0;
}