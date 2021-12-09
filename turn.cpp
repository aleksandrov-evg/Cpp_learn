#include<vector>
#include<iostream>
#include<string>
#include<algorithm>


using namespace std;


void enterData(string& action,int& numberPerson) {

	cin >> action;
	
	
	if (action != "WORRY_COUNT")
	{
		cin >> numberPerson;
	}
 }

void operation(vector<bool>& turn, int& numberPerson, string& action)
{
	if (action == "COME")					             //���� ������ COME+-
	{
		turn.resize(turn.size() + numberPerson, 0);      //������ �������
	}

	if (action == "WORRY")					             //���� ������ WORRY
	{
		turn[numberPerson] = 1;						 //�������
	}
	if (action == "QUIET")					             //���� ������ WORRY
	{
		turn[numberPerson] = 0;						 //�����������
	}

	if (action == "WORRY_COUNT")			             //���� ������ WORRY_COUNT
	{
		int aaa = 0;
		for (bool i : turn)
		{
			if (i == 1)
			{
				aaa++;
			}
		}
		cout << aaa << endl;
	}
	
}

int main()
{
	string action;
	int quantityPeople;
	int numberPerson = 0;

	cin >> quantityPeople;
	vector<bool> turn(quantityPeople,0);
			
	while (true)
	{
		enterData(action, numberPerson);
		if (action == "")
		{
			break;
		}
		operation(turn, numberPerson, action);
		
	}
	   	 

	
	return 0;
}