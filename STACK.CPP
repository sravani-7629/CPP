#include <iostream>
#include <stack>

int main() {
    std::stack<int> st;

    // Push elements
    st.push(10);
    st.push(20);
    st.push(30);

    std::cout << "Initial stack (top to bottom): ";
    while (!st.empty()) {
        std::cout << st.top() << " ";
        st.pop();
    }
    std::cout << "\n";

    // Re-push and demonstrate peek, pop, size, empty
    st.push(100);
    st.push(200);
    std::cout << "Top element: " << st.top() << "\n";           // Peek
    st.pop();
    std::cout << "After pop, new top: " << st.top() << "\n";
    std::cout << "Size: " << st.size() << "\n";
    std::cout << "Empty? " << (st.empty() ? "Yes" : "No") << "\n";

    return 0;
}

