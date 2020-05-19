Node* deleteMid(Node* head) {
    // Your Code Here
    
    if (head == NULL) 
        return NULL; 
    if (head->next == NULL) 
    { 
        delete head; 
        return NULL; 
    } 
    
    Node *hare, *tortoise,*prev;    
    hare = tortoise = head;
    
    while(hare && hare->next)
    {
        hare = hare->next->next;
        prev = tortoise;
        tortoise = tortoise->next;
    }
    
    prev->next = tortoise->next;
    delete tortoise;
    
    return head;
}