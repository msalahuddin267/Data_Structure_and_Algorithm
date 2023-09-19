#include<bits/stdc++.h>
using namespace std;

/*
--> Queue is FIFO Data Structure
--> Queue built in other container that is Deque

Not Supporting Function in Queue :
--> Sorting
--> begin(), end()
--> reverse
--> find element
--> remove any element
--> Clear all element

*/

int main()
{
    queue<int> q;

    // Insert element enqueue - O(1) (Queue e element insert korle seta sobar samne thake r erpor pichon theke jog hote thake)
    q.push(5);
    q.push(10);
    q.push(7);
    q.push(8);
    q.push(10);
    q.push(15);

    // Delete element dequeue - O(1) (Queue e element delete korle seta sobar Samne thake delete hoi orthat front e je thake se delete hoi)
    q.pop();
    q.pop();

    // Show Front element - O(1)
    int frnt = q.front();
    cout << frnt << "\n";

    // Show Back element - O(1)
    int bck = q.back();
    cout << bck << "\n";

    // Show Queue current Size - O(1)
    int sz = q.size();
    cout << sz << "\n";

    // Check Queue empty or not - O(1)
    if(q.empty()) cout << "Queue is Empty\n";
    else cout << "Queue is not Empty\n";

    // Show Queue all element - O(n) (Queue empty hoya jai)
    while(!q.empty()) // while(q.size()) evabe o lekha jai
    {
        cout << q.front() << "\n";
        q.pop();
    }

    // Swap two Queue - O(1) exchange element that is q1 er element q2 te jabe r q2 er element q1 e asbe
    queue<int>q1, q2;
    q1.swap(q2);
}
