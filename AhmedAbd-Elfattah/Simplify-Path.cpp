class Solution {
public:
    string simplifyPath(string path) {
        size_t pointer = 0;
        std::string tempVal=\\;
        std::string out = \\;
        std::stack<std::string> st;


        for (int i = 0; i < path.size(); i++) {
            if (path.at(i) == '/') {
                if (tempVal != \\) {
                    if (tempVal == \.\) {
                        tempVal = \\;
                        continue;
                    }
                    else if (tempVal == \..\) {
                        if (!st.empty()) {
                            st.pop();
                        }
                        tempVal = \\;
                        continue;
                    }
                    st.push(tempVal);
                    tempVal = \\;
                }
                continue;
            }
            tempVal += path.at(i);
        }

        if (tempVal == \..\) {
            if (!st.empty()) {
                st.pop();
            }
        }
        if ((tempVal != \.\) && (tempVal != \\) && (tempVal != \..\) ) {
            st.push(tempVal);
            tempVal = \\;
        }
        
        
        while (!st.empty()) {
            if (st.top() == \.\) {
                st.pop();
                continue;
            }
            if (out == \\) {
                out = st.top();
            }
            else {
                
                out =  st.top() + \/\ + out;
            }
            st.pop();
        }

        if (*path.begin() == '/') {
            out = \/\ + out;
        }
        return out;
    }
};