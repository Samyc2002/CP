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

const ll MAX = 20;

vector<bool> prime(MAX, true);
vector<ll> primes;

void sieve() {
    for (int p = 2; p * p <= MAX; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= MAX; i += p) {
                prime[i] = false;
            }
        }
    }

    for (ll i = 2; i < prime.size(); i++) {
        if (prime[i]) {
            // cout << i << endl;
            primes.PB(i);
        }
    }
}

void solve() {
    int x;
    cin >> x;
    vector<int> p;
    for (int i = x + 1;; i++) {
        int t = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                t = 0;
                break;
            }
        }
        if (t) {
            p.push_back(i);
            break;
        }
    }
    for (int i = p.back() + x;; i++) {
        int t = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                t = 0;
                break;
            }
        }
        if (t) {
            p.push_back(i);
            break;
        }
    }
    cout << min(1ll * p[0] * p[1], 1ll * p[0] * p[0] * p[0]) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
