class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode(0);
        ListNode* higher = new ListNode(0);
        ListNode* smallHead = small;
        ListNode* highHead = higher;
        
        while(head!=NULL)
        {
            if(head->val<x)
            {
                smallHead->next = head;
                smallHead = smallHead->next;
            }
            else
            {
                highHead->next = head;
                highHead = highHead->next;
            }
            head = head->next;
        }
        
        highHead->next = NULL;
        smallHead->next = higher->next;
        
        return small->next;

    }
};
