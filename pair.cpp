#include<bits/stdc++.h>
using namespace std;

int main()
{
	pair<int,string> p;
	pair<int,string> p1;

	// for inputting values

	p1 = make_pair(25, "abc");

	p = {10, "Vishal"};

	cout << p.first << " " << p.second << endl;
	cout << p1.first << " " << p1.second << endl;
	

	pair<int,int> p_array[3];

	p_array[0] = {1,2};
	p_array[1] = {2,3};
	p_array[2] = {3,4};

	// swap(p_array[0], p_array[2]);

	for(int i = 0; i < 3; ++i)
	{
		cout << p_array[i].first << " " << p_array[i].second << endl;
	}

	pair<int,int> pi;
	cin >> pi.first >> pi.second;
	cout << pi.first << " " << pi.second << endl;


	return 0;
}