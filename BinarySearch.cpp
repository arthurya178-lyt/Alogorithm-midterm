#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
	if (arr.size() % 2 == 0)
		arr.push_back(INT_MAX);
	int index = arr.size() / 2 , add = arr.size() / 2+1;
	while (true){
		add /= 2;
		if (arr[index] == target)
			return index+1;
		else if (arr[index] < target)
			index += add;
		else if (arr[index] > target)
			index -= add;
	}

}

int binarySearchPrint(vector<int> arr,int front,int tail, int target)
{
	for (int i = front; i <= tail; i++)
		cout << arr[i] << " ";
	cout << endl;
 	int mid =  front+ ((tail - front) / 2);
	if (arr[mid] == target)
	{
		return arr[mid];
	}
	else if (arr[mid] > target)
	{
		return binarySearchPrint(arr,front,mid-1,target);
	}
	else if (arr[mid] < target)
	{
		return binarySearchPrint(arr, mid+1, tail, target);
	}
}
int binarySearchPrint(vector<int> arr, int target)
{
	return binarySearchPrint(arr, 0, arr.size()-1, target);
}

int main(int argc, char *argv[])
{
	vector<int> A;
	int i, n, v;
	for (cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	cin >> v;
	cout << binarySearchPrint(A, v);
}
