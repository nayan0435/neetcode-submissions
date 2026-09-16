class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int cnt =1;
        int maxcnt =1;
        
        set<int> st (nums.begin(),nums.end());
        if(st.empty()){
            return 0;   
                }
        int prev = *st.begin();
        bool isfirst = true;

        for(int current: st){
            if(isfirst){
                isfirst= false;
                continue;
            }

            if(current == prev+1){
                cnt+=1;
                maxcnt = max(maxcnt,cnt);
            }
            else{
                cnt = 1;
            }
            prev = current;
        }
        return maxcnt;

    }

};
