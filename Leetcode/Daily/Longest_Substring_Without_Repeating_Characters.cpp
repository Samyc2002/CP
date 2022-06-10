#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int longestSubStr(string s, int start) {
        int n = s.length();
        if(start == n-1) {
            return 1;
        }
        int a = start, b = start+1;
        set<int> cache;
        while(b<n && s[a] != s[b]) {
            if(cache.find(s[b]) == cache.end()) {
                cache.insert(s[b]);
            } else {
                return b-a;
            }
            b++;
        }
        return b-a;
    }
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n==0) {
            return 0;
        }
        vector<int> lengths;
        for(int i=0; i<n; i++) {
            lengths.push_back(longestSubStr(s, i));
        }
        int max = *max_element(lengths.begin(), lengths.end());
        return max;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution s;
    string str;
    cin >> str;
    cout << s.lengthOfLongestSubstring(str) << endl;
    return 0;
}