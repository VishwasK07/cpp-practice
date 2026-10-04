#include <iostream>
#include <list>
using namespace std;

class Stack {
    list<int> ll;

public:
    // Push element
    void push(int val) {
        ll.push_front(val);
    }

    // Remove top element
    void pop() {
        if (!ll.empty()) {
            ll.pop_front();
        }
    }

    // Return top element
    int top() {
        return ll.front();
    }

    // Check whether stack is empty
    bool empty() {
        return ll.empty();
    }
};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}