/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* current = A;

    // Traverse the list
    while (current != NULL && current->next != NULL) {
        // Check if current and next nodes have the same value
        if (current->val == current->next->val) {
            // Duplicate found, skip the next node
            ListNode* temp = current->next;
            current->next = current->next->next;
            delete temp; // Free memory of duplicate node
        } else {
            // Move to the next node
            current = current->next;
        }
    }

    return A; // Return the head of the modified list
}
