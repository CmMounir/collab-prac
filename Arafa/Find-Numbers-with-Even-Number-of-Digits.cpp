class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result = 0;
        for(const auto& element : nums) {
            int e = element;
            int counter = 0;
            do{
                e = e/10;
                counter++;
            }
            while(e > 0);
            if(counter %2 == 0)
                result++;

        }
        return result;
    }
};