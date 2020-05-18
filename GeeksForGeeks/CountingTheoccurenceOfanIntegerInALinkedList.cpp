int count(struct node* head, int search_for)
{
//add your code here
    if(head==NULL || head->next == NULL)
        return -1;
    struct node* temp = head;
    int freq(0);
    while(temp!=NULL)
    {
        
        if(temp->data == search_for)
            freq++;
        temp = temp->next;
    }
    
    return freq;
}
