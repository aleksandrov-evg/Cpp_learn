#include<iostream>

using namespace std;

void UpdateIfGreater(int& first, int& second)
{
	if (first > second)
	{
		second = first;
	}
	
}


int main() 
{
	int a = 2;
	int b = 7;
	UpdateIfGreater(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;

}