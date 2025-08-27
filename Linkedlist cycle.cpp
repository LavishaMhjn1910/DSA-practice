class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head || !head->next) return false;  // empty or single node list
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        while (fast && fast->next) {
            slow = slow->next;          // move one step
            fast = fast->next->next;    // move two steps
            
            if (slow == fast) return true;  // cycle detected
        }
        
        return false;  // reached end → no cycle
    }
};
