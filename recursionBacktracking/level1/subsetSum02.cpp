#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<vector<int>>ans;

void subsetSum2(int index,vector<int>&arr,vector<int>&temp)
{
    ans.push_back(temp);
    for(int i=index;i<arr.size();i++)
    {
        if(i!=index and (arr[i]==arr[i-1]))continue;
        temp.push_back(arr[i]);
        subsetSum2(i+1,arr,temp);
        temp.pop_back();
        
    }
}
int main()
{
    vector<int>arr = {1,2,2};
    vector<int>temp;
    subsetSum2(0,arr,temp);
    for(auto i:ans)
    {
        cout<<"{";
        for(auto j:i)
        {
            cout<<j<<",";
        }
        cout<<"}";
        cout<<endl;
    }
    return 0;
}