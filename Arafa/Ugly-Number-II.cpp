class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long, vector<long>, greater<long>> pq;
        unordered_set<long> seen;
        pq.push(1);
        seen.insert(1);

        int count = 0;
        long ans = 1;

        while(count < n){
            ans = pq.top(); pq.pop();
            count++;

            for(int factor : {2, 3, 5}){
                long next = ans * factor;
                if(!seen.count(next)){
                    pq.push(next);
                    seen.insert(next);
                }
            }
        }

        return (int)ans;
    }
};