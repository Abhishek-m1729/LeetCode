/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        head = head->next;

        ListNode *p = new ListNode(0);
        ListNode *q = p;
        while(head)
        {
            int s = 0;
            while(head && head->val != 0) 
            {
                s += head->val;
                head = head->next;
            }

            ListNode *t = new ListNode(s);
            q->next = t;
            q = t;
            if(head) head = head->next;
        }

        return p->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna