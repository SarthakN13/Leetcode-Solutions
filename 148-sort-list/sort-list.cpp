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

ListNode* merge(ListNode* a, ListNode* b) {
        ListNode dummy(0);         // Create a dummy node
        ListNode* tail = &dummy;     // Tail pointer to build the merged list

        // Loop until one of the lists is empty
        while (a != nullptr && b != nullptr) {
            if (a->val <= b->val) {
                tail->next = a;    // Link the smaller node
                a = a->next;       // Move pointer forward in list a
            } else {
                tail->next = b;    // Link the smaller node
                b = b->next;       // Move pointer forward in list b
            }
            tail = tail->next;     // Move the tail pointer forward
        }

        // Attach the remaining part of the list that is not empty
        tail->next = (a != nullptr) ? a : b;

        return dummy.next; // The merged list starts after the dummy node
    }


    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        // to find left middle
        ListNode * slow = head;
         ListNode * fast = head;
         while(fast->next != NULL and fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
         }
         // now slow is at left middle
         ListNode * a = head;
         ListNode * b = slow->next;
         slow->next = NULL;
         a= sortList(a);
         b= sortList(b);
         ListNode * c = merge(a,b);
         return c;
         }
};