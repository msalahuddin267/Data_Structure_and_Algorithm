#include<bits/stdc++.h>
using namespace std;

/*
--> Stack is LIFO Data Structure
--> Stack built in other container that is Deque

Not Supporting Function in Stack :
--> Sorting
--> Last element access
--> begin(), end()
--> reverse
--> find element
--> remove any element
--> Clear all element

*/

int main()
{
    stack<int> st;

    // Insert element - O(1) (Stack e element insert korle seta sobar upor e thake)
    st.push(5);
    st.push(10);
    st.push(7);
    st.push(8);
    st.push(10);
    st.push(15);

    // Delete element - O(1) (Stack e element delete korle seta sobar upor thake delete hoi)
    st.pop();
    st.pop();

    // Show topmost element - O(1)
    int top = st.top();
    cout << top << "\n";

    // Show Stack current Size - O(1)
    int sz = st.size();
    cout << sz << "\n";

    // Check Stack empty or not - O(1)
    if(st.empty()) cout << "Stack is Empty\n";
    else cout << "Stack is not Empty\n";

    // Show Stack all element - O(n) (stack empty hoya jai)
    while(!st.empty()) // while(st.size()) evabe o lekha jai
    {
        cout << st.top() << "\n";
        st.pop();
    }

    // Swap two stack - O(1) exchange element that is s1 er element s2 te jabe r s2 er element s1 e asbe
    stack<int>s1, s2;
    s1.swap(s2);
}
