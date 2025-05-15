class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int result = 0;
        bool flag = true;
        do{
        for(int i = 0; i < tickets.size(); i++) {
            if(tickets[i] > 0)  { 
                tickets[i]--;
                result++;
            }
            if(i == k && tickets[i] == 0) {
                flag = false;
                break;
            }
        }
        }while(flag);
        return result;
    }
};