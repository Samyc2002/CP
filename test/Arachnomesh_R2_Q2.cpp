// Given n email addresses of different domains, please send an email to the first address(in alphabetical order) of each domain. Please assume a function sendmail() to send the emails.
#include<bits/stdc++.h>
using namespace std;

void sendmail(string email) {
    // This function will send the emails. It just console logs the sender's email id
    cout << email << endl;
}

string getDomain(string email) {
    int flag = 0;
    string ans;
    for(auto s:email) {
        if(s=='@') {
            flag = 1;
            continue;
        }
        if(s=='.') {
            flag=0;
        }
        if(flag==1) {
            ans.push_back(s);
        }
    }
    return ans;
}

void solve(vector<string> a) {
    map<string, vector<string>> chart;
    for(int i=0; i<a.size(); i++) {
        chart[getDomain(a[i])].push_back(a[i]);
    }
    for(auto i:chart) {
        sort(chart[i.first].begin(), chart[i.first].end());
        sendmail(chart[i.first][0]);
    }
}

int main() {
    vector<string> a = {
        "ghi@hotmail.com",
        "def@yahoo.com",
        "ghi@gmail.com",
        "abc@channelier.com",
        "abc@hotmail.com",
        "def@hotmail.com",
        "abc@gmail.com",
        "abc@yahoo.com",
        "def@channelier.com",
        "jkl@hotmail.com",
        "ghi@yahoo.com",
        "def@gmail.com"
    };
    solve(a);
    return 0;
}