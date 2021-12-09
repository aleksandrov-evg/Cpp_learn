#include<iostream>
#include<string>

using namespace std;  /// указываем в начале тип возращаемого значения.

bool IsPalindrom(string enter) {

  int Word_lenght = enter.size();
  int position_left = 0, position_right = Word_lenght - 1;

  while (Word_lenght > 1) {

    char left_letter = enter.at(position_left);
    char rignt_letter = enter.at(position_right);

    if ((left_letter != rignt_letter) || (Word_lenght == 1)) {

      return false;
    }

    position_left ++;
    position_right --;
    Word_lenght -= 2;

  }

  return true;
}

int main() {
    string enter;
    cin >> enter;
       
  cout << std::boolalpha << IsPalindrom(enter);

    return 0;
}