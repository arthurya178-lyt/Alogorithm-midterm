#include <iostream>
#include <vector>
using namespace std;

int linerSearch(vector<int> arr,int target)
{
    for(int i = 0 ; i < arr.size();i++)
    {
        if(arr[i] == target)
        return i;
    }
}

int main()
{   
    vector<int> A;
	int i, n, v;
	for(cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	cin >> v;
	cout << linerSearch(A,v);
	
	
}
