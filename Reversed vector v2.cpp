#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

vector<int> Reversed(const vector<int>& v)
{
	vector<int> copy_v = v;


	reverse(copy_v.begin(), copy_v.end());


		return copy_v;
}


int main()
{
	vector<int> v = { 1, 5, 3, 4, 2 };
	Reversed(v);

	return 0;
}