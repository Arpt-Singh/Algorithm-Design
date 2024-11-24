#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<vector<int>>ans;

void findCombinationSum(int index,int target,vector<int>candidates,vector<int>temp)
{
    if(index==candidates.size())
    {
        if(target==0)
        {
            ans.push_back(temp);
        }
        return;
    }
    if(candidates[index]<=target)
    {
        temp.push_back(candidates[index]);
        findCombinationSum(index,target-candidates[index],candidates,temp);
        temp.pop_back();
    }
    findCombinationSum(index+1,target,candidates,temp);
}

int main()
{

    vector<int>candidates = {2,3,6,7};
    int target = 7;
    vector<int>temp;
    findCombinationSum(0,target,candidates,temp);
    for(int i=0;i<ans.size();i++){
        for(auto j:ans[i]){
            cout<<j<<" ";

        }
        cout<<endl;
    }
    return 0;
}
