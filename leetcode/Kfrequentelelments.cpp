class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++; //mp[key]++; key=i mp={i:freq,}
        }
        vector<pair<int,int>> v(mp.begin(),mp.end()); //on prend par value
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(v[i].first);
        }
        return res;

    }
};