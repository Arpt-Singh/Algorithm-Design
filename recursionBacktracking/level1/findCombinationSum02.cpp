#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<vector<int>>ans;

void findCombinationSum2(int index,int target,vector<int>&candidates,vector<int>&temp)
{
    if(target==0)
    {
        ans.push_back(temp);
        return;
    }
    for(int i=index;i<candidates.size();i++)
    {
        if(i>index && (candidates[i]==candidates[i-1])) continue;
        if(candidates[i]>target) break;
        temp.push_back(candidates[i]);
        findCombinationSum2(i+1,target-candidates[i],candidates,temp);
        temp.pop_back();

    }
}

int main()
{
    vector<int>candidates = {1,1,1,2,2};
    int target = 4;
    vector<int>temp;
    sort(candidates.begin(),candidates.end());

    findCombinationSum2(0,target,candidates,temp);

    for(auto i:ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}