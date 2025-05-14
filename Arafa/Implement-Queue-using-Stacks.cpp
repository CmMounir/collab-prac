class MyQueue {
public:
    stack<int> stack_1;
    MyQueue() {
        
    }
    
    void push(int x) {
        stack_1.push(x);
    }
    
    int pop() {
        stack<int> stack_2;
        int result;
        while(stack_1.size() > 1) { 
            stack_2.push(stack_1.top());
            stack_1.pop();  
        }
        result = stack_1.top();
        stack_1.pop();

        while(!stack_2.empty()) { 
            stack_1.push(stack_2.top());
            stack_2.pop();
        }

        return result;
    }
    
    int peek() {
        stack<int> stack_2;
        int result;
        while(!stack_1.empty()) { 
            result = stack_1.top();
            stack_2.push(result);
            stack_1.pop();  
        }
        
        while(!stack_2.empty()) { 
            stack_1.push(stack_2.top());
            stack_2.pop();
        }

        return result;
    }
    
    bool empty() {
        return (stack_1.size() == 0);  
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */