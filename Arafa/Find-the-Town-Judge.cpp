class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size() == 0) 
        {
            if(n == 1) return 1;
            return -1;
        }

        vector<int> visited(n+1,0);

        for(const auto & element : trust) {
            visited[element[0]] = 1;
        }
        int counter = 0;
        for(int i = 1; i < n+1; i++) {
            if(visited[i] == 1) counter++;
        }
        if(n-counter != 1) return -1;

        for(int i = 1; i < n+1; i++) {
            if(visited[i] == 0) {
                cout << "uuuuuuuu : " << i << "\n";
                vector<int> aaa(n+1,0);
                for(const auto & element : trust) {
                    if(element[1] == i) {
                        aaa[element[0]] = 1;
                    }
                }
                counter =0;
                for(int i = 1; i < n+1; i++) {
                    if(aaa[i] == 1) counter++;
                }
                if(n-counter != 1) return -1;
                else return i;
            }
        }
        return -1;
    }
};