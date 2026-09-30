class Solution {
public:
    bool isPalindrome(string s) {
        int writeindex = 0;
        for(int readindex = 0;readindex<s.length();readindex++){
            if(isalnum(s[readindex])){
                s[writeindex] = tolower(s[readindex]);
                writeindex++;
            }
        }
        s.resize(writeindex);
        int i = 0;
        int j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            
            i+=1;
            j-=1;
            
        }
        return true;
        
    }
};
