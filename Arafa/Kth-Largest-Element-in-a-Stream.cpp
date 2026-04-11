1class KthLargest {
2public:
3    priority_queue<int, vector<int>, greater<int>> pq;
4    int mK;
5
6    KthLargest(int k, vector<int>& nums) {
7        mK = k;
8        
9        for (const auto& element : nums) {
10            pq.push(element);
11            if (pq.size() > mK) {
12                pq.pop(); // keep only k largest
13            }
14        }
15    }
16    
17    int add(int val) {
18        pq.push(val);
19        
20        if (pq.size() > mK) {
21            pq.pop(); // remove smallest
22        }
23
24        return pq.top(); // kth largest
25    }
26};
27
28/**
29 * Your KthLargest object will be instantiated and called as such:
30 * KthLargest* obj = new KthLargest(k, nums);
31 * int param_1 = obj->add(val);
32 */