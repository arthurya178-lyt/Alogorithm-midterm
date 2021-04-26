#include <iostream>
#include <vector>
using namespace std;
#define INT_MAX 2147483647

void swap(int &A, int &B)
{
	int K = A;
	A = B;
	B = K;
}
void selectionSort(vector<int> Arr)
{
	for (int i = 0; i < Arr.size()-1; i++)
	{
		int minIndex = 0,min= INT_MAX;
		for (int j = i; j < Arr.size(); j++)
		{
			if (Arr[j] < min)
			{
				minIndex = j;
				min = Arr[j];
			}
		}
		swap(Arr[i], Arr[minIndex]);
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
	selectionSort(A);
}