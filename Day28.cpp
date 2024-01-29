/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A) {
    ListNode* current = A;
    ListNode* prev = NULL;
    ListNode* next = NULL;

    while (current != NULL) {
        next = current->next;

        // Reverse the link
        current->next = prev;

        // Move one step forward in the list
        prev = current;
        current = next;
    }

    // The new head is the previous node
    A = prev;

    return A;
}
