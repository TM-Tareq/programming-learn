#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0, j = n - 1; i < j; i++, j--) {
        swap(a[i], a[j]);
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F