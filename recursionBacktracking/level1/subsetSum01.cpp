#include<bits/stdc++.h>
using namespace std;

void subsetSum(int index,int sum,vector<int>&arr,int n,vector<int>&temp)
{
    if(index==n)
    {
        temp.push_back(sum);
        return;
    }
    subsetSum(index+1,sum+arr[index],arr,n,temp);
    subsetSum(index+1,sum,arr,n,temp);
}
int main()
{
    vector<int>arr = {3,1,2};
    int n = arr.size();
    vector<int>temp;
    subsetSum(0,0,arr,n,temp);
    sort(temp.begin(),temp.end());
    for(auto i:temp)
    {
        cout<<i<<" ";
    }
    return 0;
}