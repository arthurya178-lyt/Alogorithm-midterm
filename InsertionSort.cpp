#include <iostream>
#include <vector>
using namespace std;

void swap(int &A, int &B)
{
	int K = A;
	A = B;
	B = K;
}
void insertionSort(vector<int> Arr)
{
	for (int i = 1; i < Arr.size(); i++)
	{
		for (int j = i; j >0; j--)
		{
			if (Arr[j] < Arr[j - 1])
				swap(Arr[j], Arr[j - 1]);
		}
		for (auto x : Arr)
			cout << x << " ";
		cout << endl;
	}
}

int main(int argc, char *argv[])
{
	vector<int> A;
	int i, n;
	for (cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	insertionSort(A);
}