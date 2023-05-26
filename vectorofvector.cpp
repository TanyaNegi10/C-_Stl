#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
	for(int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int main()
{
	vector<vector<int>> v;

	// For Input
	int N;
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		int n;
		cin >> n;
		// v.push_back(vector<int> ());
		vector<int> temp;
		for(int j = 0; j < n; ++j)
		{
			int x;
			cin >> x;
			// v[i].push_back(x);
			temp.push_back(x);
		}
		v.push_back(temp);
	}

	for(int i = 0; i < v.size(); ++i)
	{
		printVec(v[i]);
	}
	return 0;
}