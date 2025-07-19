#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool liar_found = false;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == 0 && a[i + 1] == 0) {
            liar_found = true;
        }
    }
    if (count(a.begin(), a.end(), 1) == n) { 
        liar_found = true;
    }
    cout << (liar_found ? "YES" : "NO") << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}