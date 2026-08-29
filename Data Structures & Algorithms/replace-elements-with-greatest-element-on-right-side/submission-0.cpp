class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    for(int i=0;i<arr.size();i++){
        int greatest = 0;

        for(int j =arr.size()-1;j>i;j--){
            if(greatest<arr[j]){
                greatest = arr[j];

            }
        }
        arr[i] = greatest; 

        if(i == arr.size()-1){
                arr[i] = -1;
                break;
            }


    }
    return arr;
    }
    };