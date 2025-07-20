#include <iostream>
using namespace std;

bool isSpecial(string s) {
    int n = s.size();
    for (int i = 1; i < n; i++) {
        bool ok = true;
        for (int j = 0; j < i; j++)
            if (s[j] != 'a') ok = false;
        for (int j = i; j < n; j++)
            if (s[j] != 'b') ok = false;
        if (ok) return true;
    }
    return false;
}

int main() {
    int T, count = 0;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        if (isSpecial(s)) count++;
    }
    cout << count;
    return 0;
}
