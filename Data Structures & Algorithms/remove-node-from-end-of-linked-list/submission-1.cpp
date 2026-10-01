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

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* p = head;
       if(p->next == nullptr && n == 1){
        return nullptr;
       } 
       ListNode* q = p;
       int m = 0;
       while(q != nullptr){
        m++;
        q = q->next;
       }
       int r = m-n;
      
       if(r == 0){
        return head->next;
       }
        ListNode *s = nullptr;
       for(int i = 0;i<r;i++){
        s = p;
        p = p->next;
       }
       s->next = p->next;
       return head;
    }
};
