#include<bits/stdc++.h>
using namespace std;
int main() {
    
    string s;
    cin >> s;

    int ans = 0;

    for(int i = 0; i < s.size(); i++) {
        int count = 0;

        if(s[i] == '0') {
            while(s[i] == '0' && i < s.size()) {
                count++;
                i++;
            }
        } else {
                while(s[i] == '1' && i < s.size()) {
                    count++;
                    i++;
                }
        }

        if(count >= 7) ans = 1;
        i--;
    }

    if(ans) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

// https://codeforces.com/problemset/problem/96/A