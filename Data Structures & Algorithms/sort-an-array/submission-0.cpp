class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            int small =  INT_MAX;
            int smallind = 0;
            int temp ;
            for(int j=i;j<nums.size();j++){
                if(small > nums[j]){
                    small = nums[j];
                    smallind = j;
                }
            }
            temp = nums[i];
            nums[i] = nums[smallind];
            nums[smallind] = temp;

            
        }
        return nums;
        
    }
};