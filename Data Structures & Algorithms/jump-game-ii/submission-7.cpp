class Solution {
public:
    int jump(vector<int>& nums) {
    int reach  = 0;
    int cnt = 0;
    int bestindex = 0;
    int i=0;
    while(i<nums.size()){
        if(nums.size() == 1){
            cnt =0;
            return cnt;
        }
        
        if(i>reach){
            cnt = 0;
            return cnt;
        }

        if(reach<i+nums[i]){
            reach = i+nums[i];
            cnt+=1;
        }
        if(reach>=nums.size()-1){
            return cnt;
        }
        int value = 0;
        for(int j=i+1;j<=reach;j++){
            if(value<=j+nums[j]){
                value = j+nums[j];
                bestindex = j;
            }
        }
        if(value !=0){
            i=bestindex;
        }
        else{
            i++;
        }
       
    }
    return cnt;
        
    }
};
