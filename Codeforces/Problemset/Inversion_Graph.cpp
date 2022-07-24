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

class Solution {
  public:
    int arr[100000]; // used to store the result using indices

    vector<ll> countSmaller(vector<ll> &nums) {
        // we store the vector of pairs
        // why we use pair , since we need to know the index of the element in
        // the original array
        vector<pair<ll, ll>> pairs;
        for (ll i = 0; i < nums.size(); i++) {
            pairs.push_back({nums[i], i});
        }

        mergeSort(pairs, 0, nums.size() - 1);
        vector<ll> res(nums.size());
        for (ll i = 0; i < nums.size(); i++) {
            res[i] = arr[i];
        }
        return res;
    }

    void mergeSort(vector<pair<ll, ll>> &pairs, ll low, ll high) {
        ll mid = (low + high) / 2;
        if (low < high) {
            // need to split them
            mergeSort(pairs, low, mid);
            mergeSort(pairs, mid + 1, high);
            // merge them and calculate the result for every element
            merge(pairs, low, mid + 1, high);
        }
    }

    void merge(vector<pair<ll, ll>> &pairs, ll low, ll mid, ll high) {
        // mid is the starting element for the second array
        ll i = low;
        ll j = mid;
        ll count =
            0; // the number of elements smaller in the arr from mid to high
        vector<pair<ll, ll>> temp(high - low + 1);
        ll k = 0;
        while (i <= mid - 1 && j <= high) {
            if (pairs[i].first <= pairs[j].first) {
                arr[pairs[i].second] +=
                    count; // add the number of smaller elements
                temp[k++] = {pairs[i++]};
            } else {
                // a smaller element found
                count++;
                temp[k++] = {pairs[j++]};
            }
        }
        // add the remaining first array element if left any
        while (i <= mid - 1) {
            arr[pairs[i].second] += count; // add the number of smaller elements
            temp[k++] = {pairs[i++]};
        }
        // add the remaining second array elements if left any
        while (j <= high) {
            temp[k++] = {pairs[j++]};
        }
        // change the pairs to make it in sorted order
        for (ll i = 0; i < k; i++) {
            pairs[low++] = temp[i];
        }
    }
};

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    Solution s;
    vector<ll> smaller = s.countSmaller(a);

    ll ans = n;
    for (ll i = 0; i < smaller.size(); i++) {
        ans = max(1LL, min(ans, ans - smaller[i]));
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
