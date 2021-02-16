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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 1;
        ListNode* countN = head;
        while(countN->next)
        {
            countN = countN->next;
            count++;            
        }
        if(count == n)
            return head->next;
        
        ListNode* deleteN = head;
        for(int i = 1; i < count-n; i++)
        {
            deleteN = deleteN->next;
        }
        deleteN->next = deleteN->next->next;
        return head;
    }
};



//**************************

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *forward = head;
        ListNode *backward = head;
        for(int i = 0; i < n; i++)
        {
            forward = forward->next;
        }
        if(forward==NULL)
            return head->next;
        while(forward->next)
        {
            forward = forward->next;
            backward = backward->next;
        }        
        backward->next=backward->next->next;
        return head;
    }
};
