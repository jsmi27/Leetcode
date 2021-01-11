// https://leetcode.com/problems/add-two-numbers/
// Add Two Numbers in reverse order

#include <iostream>
using namespace std;
struct ListNode {
          int val;
          ListNode *next;
          ListNode() : val(0), next(nullptr) {}
          ListNode(int x) : val(x), next(nullptr) {}
          ListNode(int x, ListNode *next) : val(x), next(next) {}
};
//struct ListNode L1,L2;
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(0), *cur = dummy;
        for (int c = 0; l1 || l2 || c; c /= 10, cur = cur->next) {
            if (l1) c += l1->val;
            if (l2) c += l2->val;
            cur->next = new ListNode(c % 10);
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        return dummy->next;
    }
};
int main()
{
    Solution s;
    ListNode *res;
    ListNode *head = new ListNode(100);
    ListNode *tail = new ListNode(900);
    res=s.addTwoNumbers(head,tail);
    int count = 0; // Initialize count  
    ListNode* current = res; // Initialize current  
    while (current != NULL)  
    {  
        cout<<current->val;
        count++;  
        current = current->next;  
    }  
    cout<<"\n"<<count;  
    return 0;
}

/*
Time Complexity: O (max (l1.size(), l2.size()))
Space Complexity: O (l1.size() + l2.size())

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0;
        ListNode *l3=new ListNode(0);
        ListNode *cur=l3;
        while (l1 || l2 || sum) {
            if (l1) sum+=l1->val, l1=l1->next;
            if (l2) sum+=l2->val, l2=l2->next;
            cur->next=new ListNode (sum%10);
            sum/=10;
            cur=cur->next;
        }
        return l3->next;
    }
};
*/