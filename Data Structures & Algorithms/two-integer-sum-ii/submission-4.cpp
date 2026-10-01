class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // int sum = numbers[0] + numbers[numbers.size()-1];
        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            if(numbers[i] + numbers[j] == target){
                if((numbers[i]  <= numbers[j] && i!=j)){
                    return {i+1,j+1};
                }
            }
            else if(numbers[i] + numbers[j]<target){
                // sum-=numbers[i];
                i++;
                // sum += numbers[i];
            }
            else{
                // sum-=numbers[j];
                j--;
                // sum += numbers[j];
            }
        }
        return {};
        
        
    }
};
