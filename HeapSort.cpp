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

void heaptify(vector<int> &arr, int index,int max_size)
{
	int change = index;
	int left = (index * 2) + 1;
	int right = (index * 2) + 2;
	if (left < max_size && arr[left] > arr[change])
		change = left;
	if (right < max_size && arr[right] > arr[change])
		change = right;
	if (change != index)
	{
		Swap(arr[change], arr[index]);
		heaptify(arr, change,max_size);
	}
}

void buildMaxHeapTree(vector<int> &arr)
{
	for (int i = (arr.size() - 2) / 2; i >= 0; i--)
	{
		heaptify(arr, i,arr.size());
	}
}

void HeapSort(vector<int> &arr)
{
	buildMaxHeapTree(arr);
	for (int i = arr.size() - 1; i >= 0; i--)
	{
		swap(arr[0], arr[i]);
		heaptify(arr, 0,i);
	}
}

int main()
{
	vector<int> A;
	int i, n;
	for (cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	HeapSort(A);
	printArrays(A);
}