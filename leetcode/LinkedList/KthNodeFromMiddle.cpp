int Solution::solve(ListNode* A, int B) {
    int move = 0;
    ListNode* target = nullptr;
    ListNode* fast = A;
    while(fast and fast->next)
    {
        fast = fast->next->next;
        move++;
        if(move == B) target = A;
        else if(move>B) target = target->next;
    }
    return target? target->val : -1;
}
