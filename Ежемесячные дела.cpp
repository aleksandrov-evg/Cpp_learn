#include<iostream>
#include<string>
#include<vector>


using namespace std;


void createMonth(int& idCurrentMonth, const vector<int>& monthDay,vector<string>& currentDailyAffairs) {

}
int main(){

	string action, s;							//s -название дела
	int i=0;									//i -день текущего дня
	int idCurrentMonth = 0;						//текущий месяц


	vector<int> monthDay = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	vector<vector<string>> currentMonthCalendar(monthDay[idCurrentMonth]);  //вектор из вектор со днями

	/*
	for (int x : currentMonthCalendar) {
		vector<string> x;
	}*/
	

	int Q;
	cin >> Q;
	for (Q; Q > 0; Q--) {
				
		cin >> action;

		if (action == "ADD") {

			cin >> i >> s;

			if (i <= currentMonthCalendar.size()) {

				currentMonthCalendar[i - 1].push_back(s);
			}

			
		}
		if (action == "DUMP") {

			cin >> i;
			if (i <= currentMonthCalendar.size()) {

				cout << currentMonthCalendar[i - 1].size();

				for (string s : currentMonthCalendar[i - 1]) {

					cout << " " << s;

				}
				cout << endl;
			}
			
		}
		if (action == "NEXT") {
		
			idCurrentMonth++;

			if (idCurrentMonth == 12) {

					idCurrentMonth = 0;
			}

			if (monthDay[idCurrentMonth] > currentMonthCalendar.size()) {

				currentMonthCalendar.resize(monthDay[idCurrentMonth]);

			}

			if (monthDay[idCurrentMonth] == currentMonthCalendar.size()) {

				
				
			}
			
			if (monthDay[idCurrentMonth] < currentMonthCalendar.size()) {
				
				int dayCountCurrent = currentMonthCalendar.size();
				int dayCountNext = monthDay[idCurrentMonth];
				int diff = dayCountCurrent - dayCountNext;
						
				//vector<string> temp;
				
				
				
				for (int z = dayCountNext; z < dayCountCurrent; z++) {

					currentMonthCalendar[dayCountNext-1].insert(end(currentMonthCalendar  [dayCountNext - 1]), 
																begin(currentMonthCalendar[z]),
																end(currentMonthCalendar  [z]));

				}
				
				currentMonthCalendar.resize(dayCountNext);

			}
		}
	
	}
	

	return 0;
}