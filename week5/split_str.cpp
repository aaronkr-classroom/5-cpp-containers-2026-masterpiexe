#include<iostream>
#include<string>
#include<vector>
#include"split_str.h"
#include<cctype>//자료형의 함수 여러 개 있음
//isspace(a) a가 공백이면 참 값을 반환

using namespace std;
vector<string> split(const string& s)
{
	vector<string> ret;
	typedef string::size_type str_sz;
	str_sz i = 0;

	while (i != s.size())
	{
		while (i != s.size() && isspace(s[i]))
		{
			i++;
		}
		str_sz j = i;

		while (j != s.size() && !isspace(s[j]))
		{
			j++;
		}
		if (i != j)
		{
			ret.push_back(s.substr(i, i - 1));
			i = j;
		}
	}
	return ret;
}

