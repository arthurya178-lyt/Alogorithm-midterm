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

template <typename T>
vector<T> findMaxSubArray(vector<T> &Array)
{
	int maxSubArray = Array[0], currMaxSubArray = Array[0], start = 0;
	vector<int> result = { 0,0,0 };
	for (int i = 0; i < Array.size(); i++)
	{
		currMaxSubArray += Array[i];

		if (currMaxSubArray < 0)
		{
			currMaxSubArray = 0;
			start = i+1;
		}
		if (Array[i] > currMaxSubArray)
		{
			currMaxSubArray = Array[i];
		}
		if (maxSubArray < currMaxSubArray)
		{
			maxSubArray = currMaxSubArray;
			result = { start,i,maxSubArray };
		}
	}
	return result;
}

int main()
{
	vector<int> arr = { -2,1,-3,4,-1,2,1,-5,4 },A;
	int i, n;
	for (cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	vector<int> data = findMaxSubArray(A);
	cout << data[0] << " " << data[1] << " "<< data[2];
}