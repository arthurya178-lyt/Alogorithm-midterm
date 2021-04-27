#include<iostream>
#include<vector>
using namespace std;
template <typename T>
void Swap(T &a, T &b)
{
	T c = a; a = b; b = c;
}
void printArrays(vector<int> &arr)
{
	for (auto i : arr)
		cout << i << " ";
	cout << endl;
}


void merge(vector<int> &arr,int first,int mid,int last)
{
	vector<int> left, right;
	for (int i = first; i <= mid; i++)
		left.push_back(arr[i]);
	left.push_back(INT_MAX);
	for (int i = mid+1; i <= last; i++)
		right.push_back(arr[i]);
	right.push_back(INT_MAX);
	int leftIndex = 0, rightIndex = 0;
	for (int i = first; i <= last; i++)
	{
		if (left[leftIndex] < right[rightIndex])
		{
			arr[i] = left[leftIndex];
			leftIndex++;
		}
		else
		{
			arr[i] = right[rightIndex];
			rightIndex++;
		}
	}
}


void mergeSort(vector<int> &arr,int front,int last)
{
	if (front < last)
	{
		int mid = (front + last) / 2;
		mergeSort(arr, front, mid);
		mergeSort(arr, mid + 1, last);
		merge(arr,front,mid,last);
	}
}
void mergeSort(vector<int> &arr)
{
	mergeSort(arr, 0, arr.size()-1);
}

int main()
{
	vector<int> A;
	int i, n;
	for (cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	mergeSort(A);
	printArrays(A);
}