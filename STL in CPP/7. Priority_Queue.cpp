#include<bits/stdc++.h>
using namespace std;

/*
--> Implement a priority queue is the binary heap.
--> Priority Queue hocche max/min heap
--> element gula sorted thake, hoi boro theke choto or choto theke boro akare thake

Not Supporting Function in Priority Queue :
--> begin(), end()
--> reverse
--> find element
--> remove any element
--> Clear all element

*/

int main()
{
    // Initialize
    priority_queue<int> pq; // Max Heap based
    priority_queue<int, vector<int>, greater<int>> pqq; // Min Heap based

    // Insert element - O(log n)
    pq.push(5);
    pq.push(10);
    pq.push(7);
    pq.push(8);
    pq.push(10);
    pq.push(15);

    // Delete element - O(log n) Top e je value ache oita delete hobe
    pq.pop();
    pq.pop();

    // Show topmost element - O(1)
    int top = pq.top();
    cout << top << "\n";

    // Show Priority Queue current Size - O(1)
    int sz = pq.size();
    cout << sz << "\n";

    // Check Priority Queue empty or not - O(1)
    if(pq.empty()) cout << "Priority Queue is Empty\n";
    else cout << "Priority Queue is not Empty\n";

    // Show Priority Queue all element - O(n) (Priority Queue empty hoya jai)
    while(!pq.empty()) // while(pq.size()) evabe o lekha jai
    {
        cout << pq.top() << "\n";
        pq.pop();
    }

    // Swap two Priority Queue - O(1) exchange element that is pq1 er element pq2 te jabe r pq2 er element pq1 e asbe
    priority_queue<int>pq1, pq2;
    pq1.swap(pq2);
}
