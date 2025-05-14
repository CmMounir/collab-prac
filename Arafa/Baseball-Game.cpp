class Solution {
public:
    bool isInteger(const std::string& str) {
        try {
            size_t pos;
            std::stoi(str, &pos);
            // Check if the whole string was parsed
            return pos == str.size();
        } catch (std::invalid_argument&) {
            return false; // Not a number
        } catch (std::out_of_range&) {
            return false; // Number out of range
        }
    }
    int calPoints(vector<string>& operations) {
        stack<int> myStack;
        int previous;
        for(const auto& element : operations) {
            if(isInteger(element)) {
                myStack.push(stoi(element));
            }
            else if(element == "+"){
                int element1 = myStack.top();
                myStack.pop();
                int element2 = myStack.top();
                myStack.push(element1);
                int element3 = element1+element2;
                myStack.push(element3);
            }
            else if(element == "C"){
                myStack.pop();
            }
            else if(element == "D"){
                myStack.push(myStack.top()*2);
            }
        }
        int result = 0;
        while(!myStack.empty()) {
            result += myStack.top();
            myStack.pop();
        }
        return result;
    }
};