#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string word = "";
    for (auto x : s) {
        if (x == ' ') {
            reverse(word.begin(), word.end());
            cout << word << " ";
            word = "";
        }
        else {
            word = word + x;
        }
    }
    reverse(word.begin(), word.end());
    cout << word << endl;
    return 0;
}