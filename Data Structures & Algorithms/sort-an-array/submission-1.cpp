class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int temp=0;
        int maxi = nums[0];
        for(int i=1;i<nums.size();i++){
            int pos = i;
            
            for(int j=i-1;j>=0;j--){
                if(nums[j]>=nums[pos]){
                    temp = nums[j];
                    nums[j] = nums[pos];
                    nums[pos] = temp;
                    pos--;
                }
            }
            
        }
        return nums;
        
    }
};