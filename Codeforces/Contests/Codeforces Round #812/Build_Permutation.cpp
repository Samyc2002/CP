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

ll MAX = 1e6;

vector<ll> primes;
void sieve() {
    for (ll i = 0; i < MAX; i++) {
        if ((int)sqrt(i) == sqrt(i)) {
            primes.PB(i);
        }
    }
}

void solve() {
    ll n;
    cin >> n;

    ll p = upper_bound(all(primes), n) - primes.begin();

    // cout << "p" << p << endl;

    unordered_set<ll> taken;
    vector<ll> a(n);
    for (ll i = n - 1; i >= 0; i--) {
        ll x = primes[p] - i;
        while ((taken.find(x) != taken.end() || x >= n) && p > 0) {
            p--;
            x = primes[p] - i;
        }
        taken.insert(x);
        a[i] = x;
    }

    taken.clear();
    for (ll i = 0; i < n; i++) {
        if (taken.find(a[i]) != taken.end() || a[i] >= n) {
            cout << -1 << endl;
            return;
        }
        taken.insert(a[i]);
    }

    for (ll i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    sieve();
    while (t--) {
        solve();
    }
    return 0;
}
