#include<vector>
#include<string>
#include<iostream>

using namespace std;

void Reverse(vector<int>& v)
{
	vector<int> revers;
	for (int i = v.size() - 1; i + 1 > 0; --i)
	{
		revers.push_back(v[i]);
			   
	}

	v = revers;
	   
}
	



int main()
{
	vector<int> numbers = { 1, 5, 3, 4, 2 };
	Reverse(numbers);


	return 0;
}