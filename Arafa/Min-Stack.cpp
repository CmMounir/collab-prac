class MinStack {
public:
    stack<int> dataStack;
    stack<int> minStack;

    MinStack() {
    }

    void push(int val) {
        dataStack.push(val);
        // Push to minStack if it is empty or val is smaller or equal to current min
        if(minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }

    void pop() {
        if(dataStack.top() == minStack.top()) {
            minStack.pop();
        }
        dataStack.pop();
    }

    int top() {
        return dataStack.top();
    }

    int getMin() {
        return minStack.top();
    }
};
