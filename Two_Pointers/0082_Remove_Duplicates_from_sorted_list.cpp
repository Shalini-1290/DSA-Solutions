class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if (head == NULL)
            return NULL;

        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
        ListNode* curr = head;

        while (curr != NULL) {

            // Check if curr starts a duplicate block
            if (curr->next != NULL && curr->val == curr->next->val) {

                // Skip all nodes with the same value
                while (curr->next != NULL && curr->val == curr->next->val) {
                    curr = curr->next;
                }

                // Remove the entire duplicate block
                prev->next = curr->next;
            }
            else {
                // Current node is unique
                prev = curr;
            }

            curr = curr->next;
        }

        return dummy.next;
    }
};
