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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode *first,*last;
      first = new ListNode;
      first->val = (l1->val +l2->val)%10;
      int carr = (l1->val + l2->val)/10;
      l1 = l1->next;l2 = l2->next;
      last = first;
      ListNode *t;
      while(l1 && l2){
        int sum = l1->val +l2->val;
        t = new ListNode;
        t->val = (sum+carr)%10;
        carr = (sum+carr)/10;
        last->next = t;
        last = t;
        l1 = l1->next;
        l2 = l2->next;
      }
      while(l1){
        t = new ListNode;
        t->val = (l1->val+carr)%10;
        carr = (l1->val+carr)/10;
        last->next = t;
        last = t;
        l1 = l1->next;
      }
      while(l2){
        t = new ListNode;
        t->val = (l2->val+carr)%10;
        carr = (l2->val+carr)/10;
        last->next = t;
        last = t;
        l2 = l2->next;
      }
      if(carr){
        t = new ListNode;
        t->val = carr;
        last->next = t;
        last = t;
      }

      return first;
    }
};
