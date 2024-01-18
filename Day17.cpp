/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A) {
    // Base case: If the list is empty or has only one node
    if (A == NULL || A->next == NULL) {
        return A;
    }

    // Recursive case: Reverse the rest of the list
    ListNode* restReversed = reverseList(A->next);

    // Adjust the pointers to reverse the current node
    A->next->next = A;
    A->next = NULL;

    // Return the new head of the reversed list
    return restReversed;
}
