class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // for(int i = 0; i < numbers.size(); i++) {
        //     for(int t = i+1; t < numbers.size(); t++) {
        //         if(target == numbers[i]+numbers[t]) {
        //             vector<int> result = {i+1, t+1};
        //             return result;
        //         }
        //     }
        // }
        int left = 0;
        int right = numbers.size()-1;
        
        while(left < right) {
            if(numbers[left]+numbers[right] == target) {
                vector<int> result = {left+1, right+1};
                return result;
            }
            if(numbers[left]+numbers[right] > target) {
                
                right--;
                
            }
            else {
                left++;
            }
        }
        return {};
    }
};