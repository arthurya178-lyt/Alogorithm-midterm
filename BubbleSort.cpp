#include <iostream>
#include <vector>
using namespace std;

void swap(int &A, int &B)
{
	int K = A;
	A = B;
	B = K;

}
void print(vector<int> arr)
{
	for (auto x : arr)
		cout << x << " ";
	cout << endl;
}
void BubbleSort(vector<int> arr)
{
	for (int i = arr.size() - 1; i > 0; i--)
	{
		for (int j = 0; j <= i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				print(arr);
			}
			
		}
		
	}
}

int main(int argc, char *argv[])
{
	vector<int> A;
	int i, n;
	for (cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	BubbleSort(A);
}