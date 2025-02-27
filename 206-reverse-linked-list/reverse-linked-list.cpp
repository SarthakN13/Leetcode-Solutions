
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL , *curr = head, *Next = head;
        while(curr){
            Next = curr-> next;
            curr -> next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    } 
};