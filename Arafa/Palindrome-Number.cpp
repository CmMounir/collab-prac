class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        else {
            vector<int> myVector;
            int n = x;
            while(n > 0) {
                myVector.push_back(n%10);
                n = n/10;
            }
            int left = 0;
            int right = myVector.size()-1;
            while(left <= right) {
                if(myVector[left] == myVector[right]) {
                    left++;
                    right--;
                }
                else {
                    return false;
                }
            }
        }
        return true;
    }
};