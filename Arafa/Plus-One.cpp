class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    
    // Traverse the digits array from the end
    for (int i = n - 1; i >= 0; --i) {
        if (digits[i] < 9) {
            digits[i]++; // just increment and return
            return digits;
        }
        digits[i] = 0; // set current digit to 0 if it was 9
    }
    
    // If all digits were 9
    digits.insert(digits.begin(), 1);
    return digits;
    }
};