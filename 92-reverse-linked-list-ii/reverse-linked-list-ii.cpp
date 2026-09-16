class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        int pos = 1;
        ListNode* t = head;
        ListNode* before = nullptr;

        while(pos < left){
            before = t;
            t = t->next;
            pos++;
        }

        ListNode* curr = t;
        ListNode* prev = nullptr;

        int times = right - left + 1;

        while(times--){
            ListNode* nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }

        t->next = curr;

        if(before){
            before->next = prev;
            return head;
        }

        return prev;
    }
};