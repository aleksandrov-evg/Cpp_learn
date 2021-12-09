/*
�������� ������� MoveStrings, ������� ��������� ��� ������� �����, 
source � destination, � ���������� ��� ������ �� ������� �������
� ����� �������. ����� ���������� ������� ������ source ������
��������� ������.

����� �������� ���������� �������, ���� ������� � ���� ����� clear:
*/

#include<vector>
#include<string>
#include<iostream>
using namespace std;
void MoveStrings(vector<string>& source, vector<string>& destination)
{
	for (int i = 0; i < source.size(); ++i)
	{
		destination.push_back(source[i]);

	}
	source.clear();
}






int main()
{
	vector<string> source = { "a", "b", "c" };
	vector<string> destination = { "z" };
	MoveStrings(source, destination);
	for (auto x : destination)
	{
		cout << x << " ";
	}
	return 0;
}