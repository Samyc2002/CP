#include <iostream>
using namespace std;

struct node {
  int val;
  node* next;
  node* prev;
  node() {
    val = 0;
    next = nullptr;
    prev = nullptr;
  }
  node(int n) {
    val = n;
    next = nullptr;
    prev = nullptr;
  }
  node(int n, node* nd) {
    val = n;
    next = nd;
    prev = nullptr;
  }
  node(int n, node* nd, node* pr) {
    val = n;
    next = nd;
    prev = pr;
  }
};

bool isPalindrome(node* head) {
      
  // O(n) time and O(1) space solution
        
  if(head==nullptr || head->next==nullptr)
      return true;
        
  node *p=head;
  node *q=head;
        
  // finding the middle node
      
  do{
      q=q->next;
      if(q!=nullptr)
      {
          q=q->next;
          p=p->next;
                
      }
  }while(p!=nullptr && q!=nullptr);
       
  node* curr=p;
  node* after=p;
  node* prev=nullptr;

  // making all the nodes after p(middle node) in reverse order
        
  while(curr!=nullptr)
  {
      after=curr->next;
      curr->next=prev;
      prev=curr;
      curr=after;
  }
  // basic algorithm of palindrome i.e from two extremes check one by one
     
  p=head;    // p points at the start
  q=prev;    // q points at the last
  while(p!=q)      
  {
      if(p->val!=q->val)     
          return false;
      if(p->next==q)   // done for even number of nodes
          return true;
      p=p->next;
      q=q->next;
            
  }
  return true;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    int t,num=0;
    cin >> t;
    node* head;
    if(t!=-1) {
      head = new node(t);
      node* temp = head;
      cin >> t;
      num++;
      while(t!=-1) {
        node* curr = new node(t, nullptr, temp);
        temp->next = curr;
        temp = temp->next;
        cin >> t;
        num++;
      }
    }
    if(isPalindrome(head)) {
      cout << "YES";
    }
    else {
      cout << "NO";
    }
  }
  return 0;
}