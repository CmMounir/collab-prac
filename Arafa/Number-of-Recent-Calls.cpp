class RecentCounter {
public:
    vector<int> myVector;
    RecentCounter() {

    }
    
    int ping(int t) {
        int counter = 0;
        myVector.push_back(t);
        int low = t-3000;
        int high = t;
        for(const auto& element: myVector) {
            if(element >= low && element <= high)
                counter++;
        }
        return counter;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */