class MyStack {
public:
    queue<int> myQueue1;
    int size;

    MyStack() {
        size = 0;
    }
    
    void push(int x) {
        myQueue1.push(x);
        size++;
    }
    
    int pop() {
        if(size == 0) return -1;

        int result = myQueue1.back();
        queue<int> myQueue2;
        while(myQueue1.size() > 1) {
            myQueue2.push(myQueue1.front());
            myQueue1.pop();
        }

        myQueue1 = myQueue2;
        size--;

        return result;
    }
    
    int top() {
        return myQueue1.back();
    }
    
    bool empty() {
        return (size == 0);
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */