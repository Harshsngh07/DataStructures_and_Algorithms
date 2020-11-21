/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution
{
public:
    int getImportance(vector<Employee *> employees, int id)
    {
        unordered_map<int, Employee *> um;
        for (Employee *i : employees)
            um[i->id] = i;
        //BFS
        int total(0);
        queue<int> q;
        q.push(id);

        while (!q.empty())
        {
            total += um[q.front()]->importance;
            for (int i : um[q.front()]->subordinates)
                q.push(um[i]->id);
            q.pop();
        }
        return total;
    }
};