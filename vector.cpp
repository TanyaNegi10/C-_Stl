#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
	cout << "Size: " << v.size() << endl;

	for(int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}
int main()
{
	vector<int> v;

	// For Input
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		printVec(v);
		v.push_back(x); // O(1)
	}

	printVec(v);

	vector<int> v1(5, 5);
	printVec(v1);
	v1.pop_back(); // removes last element
	printVec(v1); 

	// Copy the values
	vector<int> v2 = v; // O(n)
	printVec(v2);
	return 0;
}