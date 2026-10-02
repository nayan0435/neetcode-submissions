class Solution {
public:
    int maxArea(vector<int>& heights) {
        

        int i=0;
        int j=heights.size()-1;
        int area = 0;

        while(i<j){
            int mini = min(heights[i],heights[j]);
            area = max(mini * (j-i),area);
            if(heights[i] > heights[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return area;

    }
};
