#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<string> ans;
int di[] = {+1,0,0,-1};
int dj[] = {0,-1,1,0};

void solver(int i,int j,vector<vector<int>>&matrix,int n,string move,vector<vector<int>>&vis)
{
    if(i==n-1 && j==n-1)
    {
        ans.push_back(move);
        return;
    }
    string dir ="DLRU";
    for(int index =0;index<4;index++){
        int nexti = i + di[index];
        int nextj = j + dj[index];
        if(nexti>=0 &&nextj>=0 && nexti<n &&nextj<n && !vis[nexti][nextj]&&matrix[nexti][nextj]==1){
            vis[i][j] = 1;
            solver(nexti,nextj,matrix,n,move+dir[index],vis);
            vis[i][j] = 0;
        }
    }
}
int main(){
    vector<vector<int>>m ={ { 1, 0, 0, 0 },
                            { 1, 1, 0, 1 },
                            { 1, 1, 0, 0 },
                            { 0, 1, 1, 1 }};
    int n = m.size();
    vector<vector<int>>vis(n,vector<int>(n,0));
    if(m[0][0] == 1) solver(0,0,m,n,"",vis);
    for(auto i:ans){
        cout<<i<<" "; //DDRDRR DRDDRR 
    }
    return 0;
}