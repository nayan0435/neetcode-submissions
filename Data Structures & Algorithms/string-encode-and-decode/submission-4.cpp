class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(int i=0;i<strs.size();i++){
            ans = ans+ to_string(strs[i].length());
            ans = ans + "#";
            ans = ans + strs[i];
            
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans1;
        int i = 0;
        while(i<s.size()){
            int pos = s.find('#',i);
            int len = stoi(s.substr(i,pos-i));
            string word = s.substr(pos+1,len);
            ans1.push_back(word);
            i = pos+1+len; 

        }
            
            
        
        return ans1;
    }
};
