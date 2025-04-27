class Solution {
public:
    bool isSubsequence(const string& s, const string& t) {
    if (s.size() == 0) {
        return true;
    }
    int pointer_1 = 0;
    int pointer_2 = 0;

    for (int i = 0; i < t.size(); i++) {
        if (t.at(i) == s.at(pointer_1)) {
            pointer_1++;
        }
        if (pointer_1 == s.size()){
            return true;
        }
    }
    return pointer_1 == s.size();
}
};