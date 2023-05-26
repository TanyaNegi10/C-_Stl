#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>);
vector<int> search(vector<vector<int>>,int,int,int);

vector<int> search(vector<vector<int>> v,int row,int column,int target)
{
	while(column >= 0 && row < v.size())
	{
		if(v[row][column] == target)
		{
			return {row,column};
		} else if(v[row][column] < target)
		{
			row++;
		} else {
			column--;
		}
	}

	return {-1,-1};
}

void printVec(vector<int> v)
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

	int N;
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		int n;
		cin >> n;
		vector<int> temp;
		for(int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			temp.push_back(x);
		}

		v.push_back(temp);
	}

	for(int i = 0; i < N; ++i)
	{
		printVec(v[i]);
	}

	int target = 37;

	int row = 0;
	int column = v.size() - 1;

	vector<int> ans = search(v,row,column,target);

	for(int i : ans)
	{
		cout << "\n" << i << " ";
	}
	cout << endl;

	return 0;
}
