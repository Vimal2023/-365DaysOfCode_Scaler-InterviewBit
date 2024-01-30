/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
     if (!A || !A->next) {
        return A; // No need to sort if the list has 0 or 1 nodes
    }

    // Count the number of 0's and 1's
    int count_0 = 0, count_1 = 0;
    ListNode* current = A;
    while (current) {
        if (current->val == 0) {
            count_0++;
        } else {
            count_1++;
        }
        current = current->next;
    }

    // Modify the linked list nodes based on the counts
    current = A;
    for (int i = 0; i < count_0; i++) {
        current->val = 0;
        current = current->next;
    }
    for (int i = 0; i < count_1; i++) {
        current->val = 1;
        current = current->next;
    }

    return A;
}
