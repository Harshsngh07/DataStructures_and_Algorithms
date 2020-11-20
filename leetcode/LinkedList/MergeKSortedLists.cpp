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
    struct compare{
      bool operator()(const ListNode*x , const ListNode* y){
          return x->val > y->val;
      }  
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
       int n = lists.size();
       priority_queue<ListNode* , vector<ListNode* >, compare> minHeap;
       
       for(auto root: lists)
       {
           if(root!=NULL)
               minHeap.push(root);
       }
        
       ListNode* resultHead = NULL, *resultTail= NULL;
        while(!minHeap.empty())
        {
            ListNode* node = minHeap.top();
            minHeap.pop();
            if(resultHead == NULL)
                resultHead = resultTail = node;
            else
            {
                resultTail->next = node;
                resultTail = resultTail->next;
            }
            
            if(node->next!=NULL)
                minHeap.push(node->next);
        }
        return resultHead;
    }
};