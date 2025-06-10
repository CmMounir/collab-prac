class Solution {
public:
    map<int, vector<int>> myMap;
    set<int> visited;
    queue<int> room_id;

    void solve(vector<vector<int>>& rooms) {
        while(!room_id.empty()) {
            int index = room_id.front(); room_id.pop();
            if(!visited.count(index))
            {
                auto& keys = myMap[index];
                for(const auto& key : keys) {
                    room_id.push(key);
                }
            }   
            visited.insert(index);  
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int counter = 0;
        for(const auto& room : rooms) {
            myMap[counter++] = room;
        }

        room_id.push(0);

        solve(rooms);
        return (visited.size() == rooms.size());
    }
};