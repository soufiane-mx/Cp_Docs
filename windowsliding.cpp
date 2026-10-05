class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string v="";
        int left=0;
        int right=0;
        int res=0;
        while(right<s.size()){
            if(!count(v.begin(),v.end(),s[right])){
                v+=s[right];
                right++;
                res=max(res,(int)v.size());
            }
            else{
                v.erase(v.begin());
                left++;
            }
        }
        return res;
    }
};
///////TWO POINTERS//////////