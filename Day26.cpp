/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    // Dummy node to simplify code
    ListNode dummy(0);
    // Pointer to the current node in the merged list
    ListNode* current = &dummy;

    // Merge lists as long as both are not empty
    while (A && B) {
        if (A->val < B->val) {
            current->next = A;
            A = A->next;
        } else {
            current->next = B;
            B = B->next;
        }
        current = current->next;
    }

    // If one list is not empty, append the remaining nodes
    if (A) {
        current->next = A;
    } else {
        current->next = B;
    }

    return dummy.next; // Return the merged list starting from the next of dummy node
}
