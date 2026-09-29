class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int> ans;
        int cnt = 0;
        for(auto x : nums){
            mp[x]++;
        }

        vector<pair<int,int>> vec (mp.begin(),mp.end());

        sort(vec.begin(),vec.end(),[](const pair<int ,int>&a,const pair<int,int>&b){
            return a.second < b.second;
        });
        for(int j=vec.size()-1;j>=0;j--){
            if(cnt<k){
                ans.push_back(vec[j].first);
                cnt++;
            }
            else{
                break;
            }


        }
        return ans;
        
    }
};
