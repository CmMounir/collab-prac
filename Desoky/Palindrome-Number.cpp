#include <deque>
class Solution {
public:
    bool isPalindrome(int x) {
    bool palindrome = true;
    std::deque<int> queue;
    if(x < 0)      //in case of negative numbers
        return false;
    while(x)
    {
        queue.push_back(x%10);
        x /= 10;
    }
    while(queue.size() > 1)
    {
        if(queue.front() == queue.back())
        {
            queue.pop_front();
            queue.pop_back();
        }
        else
        {
            palindrome = false;
            break;
        }  
    }
    if(!palindrome)
        return false;
    return true;
    }
};