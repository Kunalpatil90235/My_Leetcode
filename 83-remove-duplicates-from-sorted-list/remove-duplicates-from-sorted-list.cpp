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
    ListNode* deleteDuplicates(ListNode* head) {
      ListNode* left=head;
      while(left!=nullptr && left->next!=nullptr){
        if(left->val == left->next->val){
            left->next = left->next->next;
        }
        
        else{
           left=left->next;
        }
       
    }
     return head;
     }
};