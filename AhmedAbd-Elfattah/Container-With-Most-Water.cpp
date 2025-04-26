class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int r = 0, l = height.size() - 1;

        while (l > r) {

            area = std::max(area, std::min(height.at(r), height.at(l)) * (l - r) );

            if (height.at(r) > height.at(l)) {
                l--;
            }
            else {
                r++;
            }
        }
        return area;
    }
};