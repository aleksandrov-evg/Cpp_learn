#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

void  Print_Day_with_average_Temp(const vector<int>& v)
{
	cout << v.size() << endl;
	
	for (int i : v)
	{

		cout << i << " ";

	}
}

int main()
{
	int SummDay,averageTemp, SummTemp=0;

	cin >> SummDay;
	
	if (SummDay == 0)
	{
		return 0;
	}

	vector<int> DayTemp(SummDay);
	vector<int> Day_with_average_Temp;

	for (int& i : DayTemp)
	{
		cin >> i;
		SummTemp += i;

	}

	averageTemp = SummTemp / SummDay;
	

	for (int i = 0; i < DayTemp.size(); i++)
	{
		if (DayTemp[i] >= averageTemp)
		{
			Day_with_average_Temp.push_back(i);
		}

	}

	if (Day_with_average_Temp.size() > 1)
	{
		Print_Day_with_average_Temp(Day_with_average_Temp);
	}

	if (DayTemp.size() == 1)
	{
		cout << 1 << endl;
		cout << 0 << endl;
	}

	return 0;
}