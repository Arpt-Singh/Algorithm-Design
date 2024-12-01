#include<bits/stdc++.h>
#include<vector>
using namespace std;

int merge(vector<int>&arr,int low,int mid, int high){
    vector<int>temp;
    int left = low;
    int right = mid + 1;
    int ans = 0;
    while(left<=mid and right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            ans+=(mid - left + 1);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
    return ans;
}

int  mergeSort(vector<int>&arr,int low,int high){
    int ans = 0;
    if(low>=high) return ans;
    int mid = (low+high)/2;
    ans += mergeSort(arr,low,mid);
    ans += mergeSort(arr,mid+1,high);
    ans += merge(arr,low,mid,high);
    return ans;
}
int main(){
    vector<int> arr = {4,3,2,1};
    int n = arr.size();
    cout<<mergeSort(arr,0,n-1);
    return 0;
}