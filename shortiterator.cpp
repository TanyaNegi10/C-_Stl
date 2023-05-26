#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v = {1,2,3,4,5};

	// range based loops
	for(int value : v)
	{
		cout << value << " ";
	}
	cout << endl;

	vector<pair<int,int> > v_p = {{1,2},{2,3},{3,4}};

	// for(pair<int,int> &value : v_p)
	// {
	// 	cout << value.first << " " << value.second << endl;
	// }
	for(auto &value : v_p)
	{
		cout << value.first << " " << value.second << endl;
	}

	// auto keyword
	vector<int> v1 = {45,67,89};
	for(auto it = v1.begin(); it != v1.end(); ++it)
	{
		cout << (*it) << endl;
	}
	return 0;
}