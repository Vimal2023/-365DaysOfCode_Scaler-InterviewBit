/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Solution::swapPairs(ListNode* A) {
    // Create a dummy node to simplify the code
    ListNode* dummy = new ListNode(0);
    dummy->next = A;
    ListNode* current = dummy;

    // Traverse the linked list in pairs
    while (current->next && current->next->next) {
        // Nodes to be swapped
        ListNode* first = current->next;
        ListNode* second = current->next->next;

        // Swapping nodes
        first->next = second->next;
        second->next = first;
        current->next = second;

        // Move to the next pair
        current = current->next->next;
    }

    return dummy->next;
}

