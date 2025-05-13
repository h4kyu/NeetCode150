class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        /* parse input: store rows, columns and boxes as sets
             iterate over chars
             --> create hash map of sets for rows, columns, boxes
             --> for each char, check if already exists in respective sets of row, column and box
                    --> if yes, return false
                    --> if no, insert to respective sets and continue to next char
            after all chars passed, return true.
        */
    }
};
