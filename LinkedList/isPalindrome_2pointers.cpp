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
    
    ListNode* reverse(ListNode* head){
        ListNode* first = NULL;
        ListNode* second = head;
        while(second != NULL)
        {
            ListNode* tempN = second->next;
            second->next = first;           
            first = second;
            second = tempN;            
        }
        return first;
    }
    bool isPalindrome(ListNode* head) {        
        if(head==NULL || head->next==NULL)
            return true;
        
        ListNode*half = head;
        ListNode*normal = head;
        while(normal != NULL && normal->next != NULL)
        {
            half=half->next;
            normal=normal->next->next;
        }
        ListNode* newList = reverse(half);
        while(newList!=NULL && head!=NULL)
        {
            if(newList->val != head->val)
                return false;
            if(newList->next != NULL && head->next != NULL){
                newList=newList->next;
                head=head->next;
            }
            else break;
        }
        return true;        
    }
};