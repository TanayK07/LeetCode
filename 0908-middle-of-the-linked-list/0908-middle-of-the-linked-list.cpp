class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        // Traverse the list with two pointers
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;            // Move slow by 1 step
            fast = fast->next->next;      // Move fast by 2 steps
        }
        
        return slow;  // When fast reaches the end, slow will be at the middle
    }
};
