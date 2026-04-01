#include<iostream>
#include<vector>
#include<string>
#include"split_str.h"


using namespace std;

int main()
{
	string s;
	cout << "Enter any string, EOF to quit: ";

	while (getline(cin,s))
	{
		vector<string> v = split(s);
		for (vector<string>::size_type i = 0;
			i != v.size(); i++)
		{
			cout << v[i] << endl;
		}
	
	}
	return 0;
}
