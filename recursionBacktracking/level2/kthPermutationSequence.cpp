#include<bits/stdc++.h>
#include<vector>
using namespace std;
string ans = "";
string getKthPermutation(int n,int k){
    int fact = 1;
    vector<int> numbers;
    for(int i=1;i<n;i++){
        fact = fact*i;
        numbers.push_back(i);
    }
    numbers.push_back(n);
     k = k-1;
     while(true){
        ans = ans + to_string(numbers[k/fact]);
        numbers.erase(numbers.begin()+k/fact);
        if(numbers.size()==0){
            break;
        }
        k = k%fact;
        fact = fact / numbers.size();
     }
     return ans;

}

int main(){
    int n = 4;
    int k = 9;
    cout<<getKthPermutation(n,k);
    return 0;
}