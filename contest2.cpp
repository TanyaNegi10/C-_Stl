#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v = {2,3,4};
	vector<int> :: iterator it;

	for(it = v.begin(); it != v.end(); it++)
	{
		cout << (*it) << endl;
	}



}