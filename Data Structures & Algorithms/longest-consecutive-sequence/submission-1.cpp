class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int cnt =1;
        int maxcnt =1;
        
        set<int> st (nums.begin(),nums.end());
        if(st.empty()){
            return 0;   
                }
        int prev = *st.begin();//• st.begin() is like your finger pointing to the very first folder.
// • *st.begin() means you open that folder and look at the number written inside (e.g., 42).
// • int prev = *st.begin(); means you take a blank piece of paper, write 42 on it, and name that paper prev.

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
