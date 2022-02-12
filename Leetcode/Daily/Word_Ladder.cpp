class Solution {
    private:
        int steps=0;
        int bfs(string &beginWord, string &endWord, unordered_set<string> &s) {
            queue<string> q;
            q.push(beginWord);
            while(!q.empty()) {
                int n=q.size();
                steps++;
                while(n--) {
                    string curr = q.front();
                    q.pop();
                    for(int i=0; i<curr.length(); i++) {
                        string t = curr;
                        for(char ch='a'; ch<='z'; ch++) {
                            t[i] = ch;
                            if(t==curr) {
                                continue;
                            }
                            if(t == endWord) {
                                return steps+1;
                            }
                            if(s.count(t)) {
                                q.push(t);
                                s.erase(t);
                            }
                        }
                    }
                }
            }
            return 0;
        }
        
    public:
        int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
            unordered_set<string> s;
            for(int i=0; i<wordList.size(); i++) {
                s.insert(wordList[i]);
            }
            if(!s.count(endWord)) {
                return 0;
            }
            return bfs(beginWord, endWord, s);
        }
};