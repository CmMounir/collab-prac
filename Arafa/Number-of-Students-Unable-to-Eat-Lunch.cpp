class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> myQueue;
        stack<int> myStack;

        for(const auto& element : students) {
            myQueue.push(element);
        }
        for(int i = sandwiches.size()-1; i > -1; i--) {
            myStack.push(sandwiches[i]);
        }
        int counter = 0;
        while(counter != myQueue.size()) {
            if(myStack.top() == myQueue.front()) {
                myStack.pop();
                myQueue.pop();
                counter = 0;
            }
            else {
                myQueue.push(myQueue.front());
                myQueue.pop();
                counter++;
            }
        }
        return counter;
    }
};