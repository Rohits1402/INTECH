#include <iostream>
#include <stack>
#include <climits>

class StackWithMin {
private:
    std::stack<int> st;
    int min;

public:
    StackWithMin() : min(INT_MAX) {}

    void push(int value) {
        if (value < min) {
            st.push(2 * value - min);
            min = value;
        } else {
            st.push(value);
        }
    }

    void pop() {
        if (st.empty()) {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
            return;
        }

        int topElement = st.top();
        st.pop();

        if (topElement < min) {
            min = 2 * min - topElement;
        }
    }

    int top() {
        if (st.empty()) {
            std::cout << "Stack is empty." << std::endl;
            return -1;
        }

        int topElement = st.top();
        return (topElement < min) ? min : topElement;
    }

    int getMin() {
        if (st.empty()) {
            std::cout << "Stack is empty." << std::endl;
            return -1;
        }

        return min;
    }
};

int main() {
    StackWithMin stack;

    stack.push(3);
    stack.push(5);
    stack.push(2);
    stack.push(7);

    std::cout << "Minimum element in the stack: " << stack.getMin() << std::endl;

    return 0;
}
