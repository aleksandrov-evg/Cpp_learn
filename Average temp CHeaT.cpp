
#include <iostream>
#include <vector>
#include <numeric>
 
using namespace std;
 
int main(){
    int n = 0;
    int temp = 0;
    cin >> n;
    vector<int> v;
    for (unsigned i = 0;i < n;i++){
        cin >> temp;
        v.push_back(temp);
    }
    int avr = accumulate(v.begin(),v.end(),int())/v.size();
    vector<int> v_new;
    int d_cnt = 0;
    for (unsigned i = 0;i < v.size();i++){
        if (v[i] > avr){
            d_cnt++;
            v_new.push_back(i);
        }
    }
    cout << d_cnt << endl;
    for (unsigned i = 0;i < v_new.size();i++){
        cout << v_new[i] << " ";
    }
    return 0;
}