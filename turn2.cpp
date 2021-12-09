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
	if (action == "COME")					             //если введен COME+-
	{
		turn.resize(turn.size() + numberPerson, 0);      //ресайз вектора
	}

	if (action == "WORRY")					             //если введен WORRY
	{
		turn[numberPerson] = 1;						 //волнуем
	}
	if (action == "QUIET")					             //если введен WORRY
	{
		turn[numberPerson] = 0;						 //успокаиваем
	}

	if (action == "WORRY_COUNT")			             //если введен WORRY_COUNT
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
	int quantityOfOperations;
	int numberPerson = 0;

	cin >> quantityOfOperations;
	vector<bool> turn(quantityOfOperations,0);
			
	for (int operationIndex = 0;
		operationIndex < quantityOfOperations;
		++operationIndex)
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