class Solution{
public:
    Node* divide(int N, Node *head){
        Node* evenStart=NULL, *evenEnd = NULL, *oddStart=NULL, *oddEnd=NULL;
        for(Node* curr = head; curr!=NULL; curr=curr->next)
        {
            int x = curr->data;
            if(x%2==0)
            {
                if(evenStart==NULL)
                {
                    evenStart = curr;
                    evenEnd = evenStart;
                }
                else
                {
                    evenEnd->next = curr;
                    evenEnd = evenEnd->next;
                }
            }
            else
            {
                if(oddStart==NULL)
                {
                    oddStart = curr;
                    oddEnd = oddStart;
                }
                else
                {
                    oddEnd->next = curr;
                    oddEnd = oddEnd->next;
                }
            }
        }
        
        if(oddStart == NULL || evenStart == NULL) return head;
        
        evenEnd->next = oddStart;
        oddEnd->next = NULL;
        
        return evenStart;
    }
};
