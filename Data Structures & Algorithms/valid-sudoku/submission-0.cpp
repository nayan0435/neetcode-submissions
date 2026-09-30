class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    unordered_set<char> row[9];
    unordered_set<char> cols[9];
    unordered_set<char> box[9];

        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
                if(board[i][j] == '.'){
                    continue;
                }

                int num  = board[i][j];
                int boxindex = i/3 *3+j/3;
                
                if(row[i].count(num) || cols[j].count(num) || box[boxindex].count(num)){
                    return false;
                }

                row[i].insert(num);
                cols[j].insert(num);
                box[boxindex].insert(num);
            }
        }
        return true;    
    }
};
