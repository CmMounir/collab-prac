class Solution {
public:
    bool isIsomorphic(const std::string& s, const std::string& t) {
    std::unordered_map<char, char> map_s_to_t;
    std::unordered_map<char, char> map_t_to_s;

    for (int i = 0; i < t.size(); i++) {
        if (map_s_to_t.find(s.at(i))==map_s_to_t.end()) {

            map_s_to_t.insert(std::make_pair(s.at(i), t.at(i)));
        }

        if (map_s_to_t.at(s.at(i)) != t.at(i)) {
            return false;
        }

        if (map_t_to_s.find(t.at(i)) == map_t_to_s.end()) {
            map_t_to_s.insert(std::make_pair(t.at(i), s.at(i)));
        }
        
        if (map_t_to_s.at(t.at(i)) != s.at(i)) {
            return false;
        }

    }

    return true;
}
};