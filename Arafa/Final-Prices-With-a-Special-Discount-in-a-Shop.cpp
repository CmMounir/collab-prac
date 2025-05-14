class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> result;
        int i,t;
        for(i = 0; i < prices.size(); i++) {
            for(t = i+1; t<prices.size(); t++) {
                if(prices[t] <= prices[i]) {
                    break;
                }
            }
            if(t < prices.size()) {
                result.push_back(prices[i]-prices[t]);
            }
            else {
                result.push_back(prices[i]);
            }
        }
        return result;
    }
};