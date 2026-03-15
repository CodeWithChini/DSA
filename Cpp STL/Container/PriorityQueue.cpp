#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(5);
    pq.push(8);
    pq.push(10);
    pq.push(4);

    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    //reverse order priority queue
     priority_queue<int, vector<int> , greater<int>> rpq;

    rpq.push(5);
    rpq.push(8);
    rpq.push(10);
    rpq.push(4);

    while(!rpq.empty())
    {
        cout << rpq.top() << " ";
        rpq.pop();
    }
    cout << endl;
    return 0;
}
