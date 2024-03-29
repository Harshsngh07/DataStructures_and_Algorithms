class Solution
{
public:
    ListNode *sortList(ListNode *head)
    {
        vector<int> list;
        ListNode *ptr = head;
        while (ptr)
        {
            list.push_back(ptr->val);
            ptr = ptr->next;
        }

        sort(list.begin(), list.end());

        ptr = head;
        for (auto i : list)
        {
            ptr->val = i;
            ptr = ptr->next;
        }
        return head;
    }
};