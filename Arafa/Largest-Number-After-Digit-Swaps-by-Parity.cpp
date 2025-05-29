class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int, std::vector<int>, std::greater<int>> myHeap_odd; 
        priority_queue<int, std::vector<int>, std::greater<int>> myHeap_even;
        map<int, int> myMap;

        int index = 0;
        while(num != 0) {
            int digit = num%10;
            if(digit%2 == 0)
                myHeap_even.push(digit);
            else
                myHeap_odd.push(digit);

            myMap[index++] = digit;
            num /= 10;
        } 

        int n = myHeap_odd.size()+myHeap_even.size();
        string result = "";
        for(int i = 0; i < n; i++) {
            if(myMap[i]%2 == 0) {
                result = static_cast<char>(myHeap_even.top() + '0') + result;
                myHeap_even.pop();
            }
            else {
                result = static_cast<char>(myHeap_odd.top() + '0') + result;
                myHeap_odd.pop();
            }
        }
        
       return stoi(result);
    }
};