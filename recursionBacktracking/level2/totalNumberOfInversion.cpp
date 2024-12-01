#include<bits/stdc++.h>
#include<vector>
using namespace std;

int ans = 0;
void merge(vector<int>&arr,int low,int mid, int high){
    vector<int>temp;
    int left = low;
    int right = mid + 1;
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
}

void mergeSort(vector<int>&arr,int low,int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    vector<int> arr = {4,3,2,1};
    int n = arr.size();
    mergeSort(arr,0,n-1);
    cout<<ans;
    return 0;
}