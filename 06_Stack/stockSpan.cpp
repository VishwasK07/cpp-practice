#include <iostream>
#include <stack>
using namespace std;

class StockSpanner {
    stack<pair<int, int>> st;

public:

    int next(int price) {
        int span = 1;

        // Remove all previous prices
        // that are less than or equal to current price
        while (!st.empty() && st.top().first <= price) {
            span += st.top().second;
            st.pop();
        }

        // Store {price, span}
        st.push({price, span});

        return span;
    }
};

int main() {
    StockSpanner stockSpanner;

    cout << stockSpanner.next(100) << " ";
    cout << stockSpanner.next(80) << " ";
    cout << stockSpanner.next(60) << " ";
    cout << stockSpanner.next(70) << " ";
    cout << stockSpanner.next(60) << " ";
    cout << stockSpanner.next(75) << " ";
    cout << stockSpanner.next(85) << endl;

    return 0;
}