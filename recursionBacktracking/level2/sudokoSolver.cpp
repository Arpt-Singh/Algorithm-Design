#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool isValid(vector<vector<int>>&board,int row,int col,int c){
    for(int i=0;i<9;i++){
        if(board[i][col]==c) return false;
        if(board[row][i]==c) return false;
        if(board[3*(row/3)+(i/3)][3*(col/3)+i%3]==c) return false;
    }
    return true;

}
bool solveSudoku(vector<vector<int>>&board){
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board.size();j++){
            if(board[i][j]==0){
                for(char c=1;c<=9;c++){
                    if(isValid(board,i,j,c)){
                        board[i][j] = c;
                        if(solveSudoku(board)==true){
                            return true;
                        }
                        else{
                            board[i][j]=0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}
int main(){
    vector<vector<int>>board= {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                                {5, 2, 0, 0, 0, 0, 0, 0, 0},
                                {0, 8, 7, 0, 0, 0, 0, 3, 1},
                                {0, 0, 3, 0, 1, 0, 0, 8, 0},
                                {9, 0, 0, 8, 6, 3, 0, 0, 5},
                                {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
                                {1, 3, 0, 0, 0, 0, 2, 5, 0},
                                {0, 0, 0, 0, 0, 0, 0, 7, 4},
                                {0, 0, 5, 2, 0, 6, 3, 0, 0}};
    solveSudoku(board);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}