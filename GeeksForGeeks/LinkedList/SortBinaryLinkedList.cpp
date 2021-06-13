ListNode* Solution::solve(ListNode* A) {
    int n1(0); //count of no of 1s
    int n2(0); //count of no of 2s
    ListNode* ptr = A;
    while(ptr!=NULL)
    {
        if(ptr->val == 1) n1++;
        else if(ptr->val == 0) n2++;
        
        ptr = ptr->next;
    }
    
    int size = n1+n2;
    ListNode *p = A;
    for(int i=0;i<size;i++)
    {
        if(n2>0)
        {
            p->val = 0;
            n2--;
        }
        else if(n1>0)
        {
            p->val = 1;
            n1--;
        }
        
        p = p->next;
    }
    
    return A;
}
