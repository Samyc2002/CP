/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include<iostream>
#include<vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> list;
        ListNode* temp = head;
        while(temp) {
            list.push_back(temp->val);
            temp = temp->next;
        }
        int t = list[k-1];
        list[k-1] = list[list.size()-k-1];
        list[list.size()-k-1] = t;
        ListNode* ans = new ListNode(list[0]);
        temp = ans;

    }
};