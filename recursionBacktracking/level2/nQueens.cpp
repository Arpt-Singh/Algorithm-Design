#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

vector<vector<string>>ans;

void solveNqueens(int col,vector<string>&board,int n,vector<int>&leftRow,vector<int>&upperDiagonal,vector<int>&lowerDiagonal){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++){
        if(leftRow[row]==0 &&lowerDiagonal[row+col]==0&&upperDiagonal[(n-1)+(col-row)]==0){
            board[row][col]='Q';
            leftRow[row]=1;
            lowerDiagonal[row+col]=1;
            upperDiagonal[n-1+col-row]=1;
            solveNqueens(col+1,board,n,leftRow,upperDiagonal,lowerDiagonal);
            board[row][col]='.';
            leftRow[row]=0;
            lowerDiagonal[row+col]=0;
             upperDiagonal[n-1+col-row]=0;
        }
    }
}
int main(){
    int n = 4;
    vector<int>leftRow(n,0),upperDiagonal(2*n-1,0),lowerDiagonal(2*n-1,0);
    vector<string>board(n);
    string s(n,'.');
    for(int i=0;i<n;i++){
        board[i] = s;
    }
    solveNqueens(0,board,n,leftRow,upperDiagonal,lowerDiagonal);
    for(auto i:ans){
        for(auto j:i){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
