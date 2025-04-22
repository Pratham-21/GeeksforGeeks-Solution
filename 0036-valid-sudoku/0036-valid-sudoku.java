class Solution {
    public boolean isValidSudoku(char[][] board) {
      int n = 9;
        Set<Character> tempMap = new HashSet<>();
        for( int i = 0; i < n; i++){

            for(int j = 0; j < n; j++){
                if(board[i][j] != '.'){
                    if(tempMap.contains(board[i][j])){
                        return false;
                    }
                    tempMap.add(board[i][j]);
                }
               
            }
            tempMap.clear();
        }
        for( int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(board[j][i] != '.'){
                    if(tempMap.contains(board[j][i])){
                        return false;
                    }
                    tempMap.add(board[j][i]);
                }
            }
            tempMap.clear();
        }
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                Set<Character> boxSet = new HashSet<>();
                for (int row = 0; row < 3; row++) {
                    for (int col = 0; col < 3; col++) {
                        char c = board[i + row][j + col];
                        if (c != '.') {
                            if (boxSet.contains(c)) {
                                return false;
                            }
                            boxSet.add(c);
                        }
                    }
                }
            }
        }
        return true;
    }  
    
}