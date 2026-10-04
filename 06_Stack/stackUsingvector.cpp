#include <iostream>
#include <vector>
using namespace std;

class Stack {
    vector<int> v;

public:
    // Push element into stack
    void push(int val) {
        v.push_back(val);
    }

    // Remove top element
    void pop() {
        if (!v.empty()) {
            v.pop_back();
        }
    }

    // Return top element
    int top() {
        return v.back();
    }

    // Check whether stack is empty
    bool empty() {
        return v.empty();
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