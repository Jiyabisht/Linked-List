/**
 * Definition for singly-linked list.
 * struct node {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode*slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};


// Why || is WRONG (step-by-step)
// Condition:
// while (fast != NULL || fast->next != NULL)
// 🧪 Example:
// 1 → 2 → 3 → NULL
// Step 1:
// fast = 1
// Check:
// fast != NULL → true
// fast->next != NULL → true
// true || true → true ✅
    
// Move:
// fast = 3
// Step 2:
// fast = 3
// Check:
// fast != NULL → true
// fast->next != NULL → false
// true || false → true ✅  (THIS IS THE PROBLEM)
    
// 👉 Loop continues even though fast->next is NULL ⚠️
// Now execute:
// fast = fast->next->next
//      = NULL->next ❌💥 CRASH
    
// 🟢 Why && is CORRECT
// Condition:
// while (fast != NULL && fast->next != NULL)
// Step 2 again:
// fast = 3
// Check:
// fast != NULL → true
// fast->next != NULL → false
// true && false → false ❌
    
// 👉 Loop stops here safely
// No crash. No problem.

// Think like this:
// && → “Proceed ONLY if everything is safe” ✅
// || → “Proceed even if something is unsafe” ❌
