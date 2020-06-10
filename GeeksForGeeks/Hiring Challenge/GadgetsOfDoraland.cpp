
In Doraland, people have unique Identity Numbers called D-id. Doraemon owns the most popular gadget shop in Doraland. Since his gadgets are in high demand and he has only K gadgets left he has decided to sell his gadgets to his most frequent customers only. In case two or more people have visited his shop the same number of time he gives priority to the customer with higher D-id. Find the D-ids of people he sells his K gadgets to.

Input:
The first line of input contains the number of test cases T. For each test case, there will be three lines of input. The first line contains the number N ie. the total number of times people visited the shop. Second line contains N space-separated integers denoting D-id's of people who visited the shop .The third line contains the integer K.

Output:
For each test case, print the D-id of top k people who purchased gadgets from Doraemon.

Constraints:
1 <= T <= 100
1 <= N <= 105
1<= D-id <=104

Example:
Input:
2
6
1 1 1 2 2 3
2
8
1 1 2 2 3 3 3 4
2
Output:
1 2
3 2 

Explanation:
TestCase 2: People with D-id 1 and 2 have visited shop 2 times Therefore, in this case, the answer includes the D-id 2 as 2 > 1.






#include <bits/stdc++.h>
using namespace std;

struct compare
{
    bool operator()(pair<int, int> p1, pair<int, int> p2)
    {
        if (p1.second == p2.second)
            return p1.first < p2.first;

        return p1.second < p2.second;
    }
};

void mostFrequentNumber(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    vector<pair<int, int>> freq_arr(m.begin(), m.end());

    priority_queue<pair<int, int>, vector<pair<int, int>>,
                   compare>
        pq(m.begin(), m.end());

    for (int i = 1; i <= k; i++)
    {
        cout << pq.top().first << " ";
        pq.pop();
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int k;
        cin >> k;

        mostFrequentNumber(a, n, k);
        cout << endl;
    }
}