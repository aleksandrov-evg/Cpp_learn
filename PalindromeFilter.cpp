#include<iostream>
#include<vector>
#include<string>


using namespace std;

bool IsPalindrom(string enter) {

    int Word_lenght = enter.size();
    int position_left = 0, position_right = Word_lenght - 1;

    while (Word_lenght > 1) {

        char left_letter = enter.at(position_left);
        char rignt_letter = enter.at(position_right);

        if ((left_letter != rignt_letter) || (Word_lenght == 1)) {

            return false;
        }

        position_left++;
        position_right--;
        Word_lenght -= 2;

    }

    return true;
}


vector<string>  PalindromFilter(vector<string>& words, int minLength) {
    vector<string> result;
    string resultString;

    for (int i = 0; i < words.size(); ++i)
    {
        string CurrentWord = words[i];
       
        if (IsPalindrom(CurrentWord) == true && CurrentWord.size()>=minLength) {
            
            result.push_back(CurrentWord);
        }
        
    }

    return result;
   
}




int main() {
    setlocale(LC_ALL, "Russian");
    vector<string> words{ "weew","bro","code" };
    int minlenght;
    cin >> minlenght;
  
    cout<<PalindromFilter(words, minlenght).at(0);

    return 0;
}