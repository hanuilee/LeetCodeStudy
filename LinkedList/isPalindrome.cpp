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
    bool isPalindrome(ListNode* head) {
        stack<int> temp;
        ListNode* cur=head;
        while(cur != NULL)
        {
            temp.push(cur->val);
            cur= cur->next;
        }
        
        cur = head;
        int num = temp.size()/2;
        for(int i = 0; i < num; i++)
        {
            if(cur->val != temp.top())
                return false;
            cur = cur->next;
            temp.pop();
        }
        
        return true;
    }
};