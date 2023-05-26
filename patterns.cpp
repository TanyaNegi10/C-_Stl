#include<iostream>
using namespace std;
int main()
{
	// patterns - nested loops
	//*****
	//*****
	//*****
	//*****

	//*
	//* *
	//* * *
	//* * * *

	//1
	//1 2
	//1 2 3
	//1 2 3 4

	//1
	//2 2
	//3 3 3
	//4 4 4 4

	//* * * *
	//* * *
	//* *
	//*

	//1 2 3 4
	//1 2 3
	//1 2
	//1

	//        *
	//      * * *
	//    * * * * *
	//  * * * * * * *
	//* * * * * * * * *

	//* * * * * * * * *
	//  * * * * * * *
	//    * * * * *
	//      * * *
	//        *

	//*
	//* *
	//* * *
	//* * * *
	//* * * * *
	//* * * *
	//* * *
	//* *
	//*

	// 1) for the outer loop - count the no. of lines
	// 2) for the inner loop - focus on the columns and connect to rows
	// 3) print inside the inner for loop
	// 4) observe symmetry (optional)

    // for(int i = 0; i < 4; ++i)
    // {
    // 	for(int j = 0; j < 4; ++j)
    // 	{
    // 		cout << "* ";
    // 	}
    // 	cout << endl;
    // }

    // for(int i = 0; i < 5; ++i)
    // {
    // 	for(int j = 0; j <= i; ++j)
    // 	{
    // 		cout << "* ";
    // 	}
    // 	cout << endl;
    // }

    // for(int i = 1; i <= 4; ++i)
    // {
    // 	for(int j = 1;j <= i; ++j)
    // 	{
    // 		cout << j << " ";
    // 	}
    // 	cout << endl;
    // }

    // for(int i = 1; i <= 4; ++i)
    // {
    // 	for(int j = 1; j <= i; ++j)
    // 	{
    // 		cout << i << " ";
    // 	}
    // 	cout << endl;
    // }

    // for(int i = 1; i <= 4; ++i)
    // {
    // 	for(int j = 4; j >= i; --j)
    // 	{
    // 		cout << "* ";
    // 	}
    // 	cout << endl;
    // }

    // for(int i = 0; i < 5; ++i)
    // {
    // 	for(int j = 0; j < 5 - i; ++j)
    // 	{
    // 		cout << "* ";
    // 	}
    // 	cout << endl;
    // }

    // for(int i = 0; i < 4; ++i)
    // {
    // 	for(int j = 1; j < 4 - i + 1; ++j)
    // 	{
    // 		cout << j << " ";
    // 	}
    // 	cout << endl;
    // }

    // for(int i = 0; i < 5; ++i)
    // {
    // 	for(int j = 0; j < 5- i - 1; ++j)
    // 	{
    // 		cout << " ";
    // 	}

    // 	for(int j = 0; j < 2 * i + 1; ++j)
    // 	{
    // 		cout << "*";
    // 	}

    // 	for(int j = 0; j < 5 - i - 1; ++j)
    // 	{
    // 		cout << " ";
    // 	}

    // 	cout << endl;
    // }

    // for(int i = 0; i < 5; ++i)
    // {
    // 	for(int j = 0; j < i; ++j)
    // 	{
    // 		cout << " ";
    // 	}

    // 	for(int j = 0; j < 2*5 - (2 * i + 1); ++j)
    // 	{
    // 		cout << "*";
    // 	}

    // 	for(int j = 0; j < i; ++j)
    // 	{
    // 		cout << " ";
    // 	}
    // 	cout << endl;
    // }

    for(int i = 1; i <= (2 * 5 - 1); ++i)
    {
    	int star = i;
    	if (i > 5) star = 2 * 5 - i;
    	for(int j = 1; j <= star; ++j)
    	{
    		cout << "* ";
    	}
    	cout << endl;


    }
}