class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxi =INT_MIN;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+= nums[i]; // advance me if index  print krna ho to  if (sum ==0) start  = i aisa 
            if(sum>maxi){
                maxi = sum;
            }
            if(sum<0){
                sum = 0;
            }
            

        }
        return maxi;
            

    }
};
