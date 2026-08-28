class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>mp;
        int A = false;
        for(auto x : nums){
            mp[x]++;
        }
        for(auto it : mp){
            if(it.second >1){
                A = true;
                return A;
            }
        }
        return A;   
    }
};