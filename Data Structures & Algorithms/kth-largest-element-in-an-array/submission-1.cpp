class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         sort(nums.begin(),nums.end());
        //  int klargest = INT_MAX;
        //  int cnt = 0;
        //  for(int i = nums.size()-1;i>=0;i--){
        //     if(cnt == k){
        //         break;
        //     }
        //     if(klargest>=nums[i]){
        //         klargest = nums[i];
        //         cnt++;
        //     }


        //  }
        int klargest = nums[nums.size() - k];
        return klargest;
        
    }
};
