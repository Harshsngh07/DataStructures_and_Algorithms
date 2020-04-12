/* Deques ended queues are sequence containers 
with the feature of expansion and contraction 
on both the ends.

They are similar to vectors, but are more efficient 
in case of insertion and deletion of elements.

*/

#include <iostream>
#include <deque>

using namespace std;

void showq(deque<int> g)
{

    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << "\t" << *it;
    cout << "\n";
}

int main()
{
    deque<int> gquiz;
    gquiz.push_back(10);
    gquiz.push_front(20);
    gquiz.push_back(30);
    gquiz.push_front(15);
    cout << "The deque gquiz is: ";
    showq(gquiz);

    cout << "\n gquiz size: " << gquiz.size();
    cout << "\n gquiz.max_size():  " << gquiz.max_size();
    cout << "\n gquiz.at(2) " << gquiz.at(2);
    cout << '\n gquiz.front() ' << gquiz.front();
    cout << "\n gquiz.back() " << gquiz.back();

    cout << "\n gquiz.pop_front(): ";
    gquiz.pop_front();
    showq(gquiz);

    cout << "\n gquiz.pop_back() : ";
    gquiz.pop_back();
    showq(gquiz);
}