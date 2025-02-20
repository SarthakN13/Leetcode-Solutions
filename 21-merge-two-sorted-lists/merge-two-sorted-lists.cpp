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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
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
};
