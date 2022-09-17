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
    ll N;
    cin >> N;
    vector<ll> A(N), B(N);
    for (ll i = 0; i < N; i++)
        cin >> A[i];
    for (ll i = 0; i < N; i++)
        cin >> B[i];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    vector<ll> SA(N + 1), SB(N + 1);
    for (ll i = 0; i < N; i++) {
        SA[i + 1] = SA[i] + A[N - i - 1];
        SB[i + 1] = SB[i] + B[N - i - 1];
    }
    ll cnt = 0;
    while (true) {
        long long a = 0, b = 0;
        ll n = N + cnt;
        ll use = n - n / 4;
        if (use <= cnt) {
            a = (long long)use * 100;
        } else {
            a = (long long)cnt * 100 + SA[use - cnt];
        }
        if (N <= use)
            b = SB[N];
        else
            b = SB[use];
        if (a >= b)
            break;
        cnt++;
    }
    cout << cnt << endl;
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
