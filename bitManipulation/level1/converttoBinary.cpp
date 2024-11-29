#include<bits/stdc++.h>
using namespace std;

string convertToBinary(int n){
    string result = "";
    while(n!=0){
        if(n&1) result+='1';
        else result+='0';
        n>>=1;
    }
    reverse(result.begin(),result.end());
    return result;
}

int main(){
    int n;
    cin>>n;
    cout<<convertToBinary(n);
    return 0;
}
