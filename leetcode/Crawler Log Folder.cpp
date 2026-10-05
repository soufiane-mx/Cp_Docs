class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st={};
        for(string i : logs) {
            if(i == "./") {
                continue;
            }
            else if(i == "../") {
                if(!st.empty())
                    st.pop();
            }
            else {
                st.push(i);
            }
        }
        return st.size();

    }
};