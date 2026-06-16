#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    string vowels = "aeiouy";
    string ans;

    for (char c : s) {
        c = tolower(c);

        bool isVowel = false;
        for (char v : vowels) {
            if (c == v) {
                isVowel = true;
                break;
            }
        }

        if (!isVowel) {
            ans += '.';
            ans += c;
        }
    }

    cout << ans << endl;
    return 0;
}
