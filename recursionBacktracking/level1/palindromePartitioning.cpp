#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<vector<string>>ans;
bool isPalindrome(string s,int start,int end){
    while(start<=end){
        if(s[start++]!=s[end--]){
            return false;
        }
    }
    return true;
}
void solver(int index,string s,vector<string>&temp){
    if(index==s.size()){
        ans.push_back(temp);
        return;
    }
    for(int i=index;i<s.size();++i){
        if(isPalindrome(s,index,i)){
            temp.push_back(s.substr(index,i-index+1));
            solver(i+1,s,temp);
            temp.pop_back();
        }
    }
}

int main(){
    string s = "aabb";
    vector<string>temp;
    solver(0,s,temp);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<",";
        }
        cout<<endl;
    }
    return 0;
}