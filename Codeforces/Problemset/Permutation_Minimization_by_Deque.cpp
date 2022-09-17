#include <bits/stdc++.h>

using namespace std;

#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.rend(), cont.rbegin()
#define PB push_back
#define PI 3.1415926535897932384626433832795
#define endl "\n"
typedef long int l;
typedef unsigned long int ul;
typedef long long int ll;
typedef unsigned long long int ull;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    deque<ll> q;
    q.push_back(a[0]);
    for (ll i = 1; i < n; i++) {
        if (a[i] < q.front()) {
            q.push_front(a[i]);
        } else {
            q.push_back(a[i]);
        }
    }

    for (ll i = 0; i < n; i++) {
        cout << q.front() << " ";
        q.pop_front();
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
