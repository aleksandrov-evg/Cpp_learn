#include<iostream>
#include<vector>
#include<string>

using namespace std;


int main() {

    int Q;
    cin >> Q;
    string request;
    int k, i, count;
    vector<int> current_situation(0);

    for (int p = 0; p < Q; p++) {
        cin >> request;
        if (request == "COME") {
            cin >> k;
            current_situation.resize(current_situation.size() + k, 1);
        
        }
        else if (request == "WORRY") {
            cin >> i;
            current_situation[i] = 0;

        }
        else if (request == "QUIET") {
            cin >> i;
            current_situation[i] = 1;

        }
        else if (request == "WORRY_COUNT") {
            count = 0;
            for (auto s : current_situation) {
                if (s == 0) {
                    count += 1;
                }
            }
            cout << count << endl;

        }
    }
    return 0;
}