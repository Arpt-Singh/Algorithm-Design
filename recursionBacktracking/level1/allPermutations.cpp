#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<vector<int>>ans;
void findallPermutation(int index,vector<int>&nums){
    if(index==nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<nums.size();i++){
        swap(nums[index],nums[i]);
        findallPermutation(index+1,nums);
        swap(nums[index],nums[i]);
    }

}
int main(){
    vector<int>nums = {1,2,3,4};
    findallPermutation(0,nums);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

