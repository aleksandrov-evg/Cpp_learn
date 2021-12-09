#include<iostream>
#include<string>

using namespace std;

void IsPalindrom(string enter) {
    bool result=true;
    int Word_lenght = enter.size();
    int position_left = 0, position_right = Word_lenght-1;
    


    if (Word_lenght >= 1) {

        while (Word_lenght !=0) {

                    char left_letter = enter.at(position_left);
                    char rignt_letter = enter.at(position_right);

                    if (left_letter != rignt_letter) {
                        result = false;
                        break;
                    }
                    if (left_letter == rignt_letter) {
                        result = true;
                    }
                    if (Word_lenght == 1) {
                        result = true;
                        break;
                     }



                    position_left = position_left + 1;
                    position_right = position_right - 1;
                    Word_lenght = Word_lenght - 2;

        }
        
    }
    cout << std::boolalpha << result;
}


int main() {
    string enter;
    cin >> enter;
    IsPalindrom(enter);
    return 0;
       
}
